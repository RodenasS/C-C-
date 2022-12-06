#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Atstumo skaièiavimas;
double atstum( double x1, double y1, double x2, double y2)
{
    double result = sqrt(pow(x2-x1, 2) + pow(y2-y1,2));
    return result;
}
int main()
{

    // Koordinaèiø ávedimas
    int x, y;
    cout << "Iveskite koordinate (X;Y), kuri bus tikrinama ar ieina i duotaja funkcija : " << endl;;
    cin >> x >> y;

    // Taðkai;
    double  x1 = -0.5, y1 = 0,
            x2 = 0.5, y2 = 0,
            atstumas, atstumas2;

    // Atstumai;
    atstumas = atstum(x1, y1, x, y);
    atstumas2 = atstum(x2, y2, x, y);

    // Tikrinimas;

    if( x <= 0 && (atstumas <= 0.5 || atstumas2 <= 0.5))
    {
        cout << "Taskas ieina i duotaja funkcija." << endl;
    }
    else
    {
        cout << "Taskas neieina i duotaja funkcija." << endl;
    }


}
