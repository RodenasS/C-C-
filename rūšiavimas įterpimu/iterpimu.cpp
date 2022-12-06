#include <iostream>

using namespace std; 

// Void funkcijos
void Iterpimas(int m[], int n)  
{  
    int a, b;  
    for (int i = 1; i < n; i++) 
    {  
        a = m[i];  
        b = i - 1;  
  
        while (b >= 0 && m[b] > a) 
        {  
            m[b + 1] = m[b];  
            b = b - 1;  
        }  
        m[b + 1] = a;  
    }  
}  
  
void Isvedimas(int m[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        cout << m[i] << " " << endl;
}  

// Pagrindinë funkcija
int main()  
{  
    // masyvas bandymui

    int m[] = { 20, 9, 15, 2, 9 }; 

    // n skaièiavimas naudojant sizeof 
    int n = sizeof(m) / sizeof(m[0]);  
  
    // funkcijos 
    Iterpimas(m, n);  
    Isvedimas(m, n);  
  
    return 0;  
}  
