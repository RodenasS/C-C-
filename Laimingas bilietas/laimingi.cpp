#include <iostream>

using namespace std;

int main()
{
    int sk;

    cout << " Iveskite sesiazenkli skaiciu: " << endl;
    cin >> sk;

    if(sk/100000 > 10 || sk/100000 < 1) return 0;

    if(sk / 100000 + sk % 100000 / 10000 + sk % 10000 / 1000 == sk % 1000 / 100 + sk % 100 / 10 + sk % 10)
    {
        cout << "Bilietas yra laimingas!" << endl;
    }
    else
    {
        cout << "Bilietas yra nelaimingas." << endl;
    }
     
return 1;
}