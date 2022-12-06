#include <iostream> 

using namespace std; 

// Void funkcijos

void sukeitimas(int *xp, int *yp)  
{  
    int laikinas = *xp;  
    *xp = *yp;  
    *yp = laikinas;  
}  

void burbulas(int m[], int n)  
{  
    int i, a;  
    for (i = 0; i < n-1; i++)      
      
    for (a = 0; a < n-i-1; a++)  
        if (m[a] > m[a+1])  
            sukeitimas(&m[a], &m[a+1]);  
}  
  
void isvedimas(int m[], int size)  
{  
    int i;  
    for (i = 0; i < size; i++)  
        cout << m[i] << endl;  
}  
  
// Pagrindinë funkcija
int main()  
{  
    int m[] = {99, 11, 34, 74, 5, 9, 99};  

    // N skaièiavimas naudojant sizeof
    int n = sizeof(m)/sizeof(m[0]);  

    burbulas(m, n);  
    isvedimas(m, n);  
    return 0;  
}  
