#include <iostream>

using namespace std;

int main()
{
    // Int
    int skaicius, a, b, c;

    // Ivedimas
    cout << " Iveskite trizenkli skaiciu: " << endl;
    cin >> skaicius;

    if(skaicius / 100 > 9 || skaicius / 100 < 1) return 0; // tikrinam ar skaicius yra trizenklis;


    // Skaiciavimas
    a = skaicius / 100;    
    c = skaicius % 10;
    b = (skaicius % 100 - c) / 10;  


    // Isvedimas
    cout << a << " " << b << " " << c << endl;
    cout << "Ju suma : " << a + b + c << endl;
    
    return 0;
}