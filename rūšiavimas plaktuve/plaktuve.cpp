#include <iostream>
using namespace std;

// Void funkcijos
void Plaktuve(int a[], int n)
{
    bool sukeisti = true;
    int pradinis = 0;
    int paskutinis = n - 1;
 
    while (sukeisti) 
    {
        sukeisti = false;
        for (int i = pradinis; i < paskutinis; ++i) 
        {
            if (a[i] > a[i + 1]) 
            {
                swap(a[i], a[i + 1]);
                sukeisti = true;
            }
        }

        if (!sukeisti)
            break;

        sukeisti = false;
        --paskutinis;

        for (int i = paskutinis - 1; i >= pradinis; --i) 
        {
            if (a[i] > a[i + 1]) {
                swap(a[i], a[i + 1]);
                sukeisti = true;
            }
        }

        ++pradinis;
    }
}

void Isvedimas(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << endl;
}

// Pagrindinë funkcija
int main()
{

    int a[] = { 5, 1, 4, 2, 8, 0, 2 };
    // n skaièiavimas naudojant sizeof

    int n = sizeof(a) / sizeof(a[0]);

    Plaktuve(a, n);
    Isvedimas(a, n);

    return 0;
}