#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cctype>

#define MAX 45

struct Node{
    char word[MAX];
    int count;
    struct Node *left,*right;
};

struct Node *MZodziai(struct Node *,char *);
void Spausdinti(struct Node *);

struct Node *MZodziai(struct Node *p,char *w)
{
    int cond;
    if(p==NULL){
        p=(struct Node*)malloc(sizeof(struct Node));
        strcpy(p->word,w);
        p->count=1;
        p->left=p->right=NULL;
    }
    else if((cond=strcmp(w,p->word))==0){
        p->count++;
    }
    else if(cond<0){
        p->left=MZodziai(p->left,w);
    }
    else
        p->right=MZodziai(p->right,w);
    return (p);
}

void Spausdinti(struct Node *p)
{
    if(p !=NULL){
        Spausdinti(p->left);
        printf("%s(%d)\n",p->word,p->count);
        Spausdinti(p->right);
    }
}
int main()
{
    char word[MAX];
    FILE *failas;
    char c; int i;
    struct Node *root;
    root=NULL;

    failas=fopen("tekstas.txt","r");

    while((c=fgetc(failas)) != EOF){
        ungetc(c,failas);
        for(i=0;( c = fgetc (failas)) !=' '&&c != '\n' &&c != EOF;  i++){
            if(( c>='A'&&c<='Z' )||( c>='a'&&c<='z' )){
                c=tolower(c);
                word[i]=c;
            }
            else break;
        }
        word[i]='\0';
        if(strlen(word)>0)
            root=MZodziai(root,word);
    }

    Spausdinti(root);

    return 0;
}
