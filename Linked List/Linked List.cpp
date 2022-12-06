
#include <bits/stdc++.h>
// 1 uzduotis
/*
using namespace std;


struct Node {
    int data;
    struct Node* next;
};


void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = new Node;

    new_node->data = new_data;

    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}

float SkVid(struct Node* head)
{
    // if head = NULL
    if (!head)
        return -1;

    int c = 0; // Initialize count
    int sum = 0;
    float vid = 0.0;

    struct Node* current = head; // Initialize current
    while (current != NULL) {
        c++;
        sum += current->data;
        current = current->next;
    }

    vid = (double)sum / c;

    return vid;
}

int main()
{
    int sk;

    struct Node* head = NULL;

    while (true) {
        cout << "1. Prideti skaiciu" << endl;
        cout << "2. Isvesti vidurki" << endl;
        cout << "3. Iseiti " << endl << endl;
        cout << "Ivesk savo pasirinkima: " << endl;
        int Choice;

        cin >> Choice;
        if (Choice == 1) {
            cout << "Iveskite skaiciu" << endl;
            cin >> sk;
            push(&head, sk);
        }
        else if (Choice == 2) {
            cout << " Vidurkis: " << SkVid(head) << endl;
        }
        else if (Choice == 3) {
            exit(0);
        }
        else {
            cout << "Nera tokio pasirinkimo " << endl;
        }
    }
    return 0;
}
*/
// 2 uzduotis

using namespace std;


class Node {
public:
    int Id;
    string Vardas;
    string Pavarde;
    int Vid;
    Node* next;
};

Node* head = new Node();

bool check(int x)
{
    if (head == NULL)
        return false;

    Node* t = new Node;
    t = head;

    while (t != NULL) {
        if (t->Id == x)
            return true;
        t = t->next;
    }

    return false;
}

void Pridejimas(int Id, string Vardas,
                   string Pavarde, int Vid)
{
    if (check(Id)) {
        cout << "Studentas jau egzistuoja " << endl;
        return;
    }

    Node* t = new Node();
    t->Id = Id;
    t->Vardas = Vardas;
    t->Pavarde = Pavarde;
    t->Vid = Vid;
    t->next = NULL;

    if (head == NULL
        || (head->Id >= t->Id)) {
        t->next = head;
        head = t;
    }

    else {
        Node* c = head;
        while (c->next != NULL
               && c->next->Id < t->Id) {
            c = c->next;
        }
        t->next = c->next;
        c->next = t;
    }

    cout << "Studentas sekmingai irasytas" << endl;
}
int Pasalinimas(int Id)
{
    Node* t = head;
    Node* p = NULL;

    if (t != NULL
        && t->Id == Id) {
        head = t->next;
        delete t;

        cout << "Studentas istrintas " << endl;
        return 0;
    }

    while (t != NULL && t->Id != Id) {
        p = t;
        t = t->next;
    }
    if (t == NULL) {
        cout << "Toks studentas neegzistuoja" << endl;
        return -1;
        p->next = t->next;

        delete t;
        cout << "Studentas istrintas " << endl;

        return 0;
    }
}

void SApziura()
{
    Node* p = head;
    if (p == NULL) {
        cout << "Sarasas tuscias " << endl;
    }
    else {
        cout << "ID\tVardas\tPavarde\tVidurkis\n";

        // Until p is not NULL
        while (p != NULL) {
            cout << p->Id << "    \t"
                 << p->Vardas << "\t"
                 << p->Pavarde << "\t"
                 << p->Vid << endl;
            p = p->next;
        }
    }
}
float SkVid(struct Node* head)
{
    if (!head)
        return -1;

    int c = 0; //
    int sum = 0;
    float vidurkis = 0.0;

    struct Node* current = head;
    while (current != NULL) {
        c++;
        sum += current->Vid;
        current = current->next;
    }

    vidurkis = (double)sum / c;

    return vidurkis;
}

int main()
{
    head = NULL;
    string Vardas, Pavarde;
    int Id, Vid;

    while (true) {
        cout << "1. Prideti studenta" << endl;
        cout << "2. Istrinti studenta " << endl;
        cout << "3. Perziureti sarasa" << endl;
        cout << "4. Perziureti saraso studentu vidurki" << endl;
        cout << "5. Iseiti " << endl << endl;
        cout << "Ivesk savo pasirinkima: " << endl;
        int Choice;

        cin >> Choice;
        if (Choice == 1) {
            cout << "Iveskite studento varda" << endl;
            cin >> Vardas;
            cout << "Iveskite studento ID numeri" << endl;
            cin >> Id;
            cout << "Iveskite studento pavarde" << endl;
            cin >> Pavarde;
            cout << "Iveskite studento pazymiu vidurki" << endl;
            cin >> Vid;
            Pridejimas(Id, Vardas, Pavarde, Vid);
        }
        else if (Choice == 2) {
            cout << "Iveskite ID studento kuri norite istrinti is saraso" << endl;
            cin >> Id;
            Pasalinimas(Id);
        }
        else if (Choice == 3) {
            SApziura();
        }
        else if (Choice == 4) {
            cout << "Pazymiu vidurkis: " << SkVid(head) << endl;
        }
        else if (Choice == 5) {
            exit(0);
        }
        else {
            cout << "Nera tokio pasirinkimo " << endl;
        }
    }
    return 0;
}