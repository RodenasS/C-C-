#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


// Ploto skaièiavimas;

double plotas(double x1, double y1, double x2, double y2, double x3, double y3)
{
    double result = abs(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2) / 2);
    return result;
}
// Atstumo skaièiavimas;
double atstum( double x1, double y1, double x2, double y2)
{
    double result = sqrt(pow(x2-x1, 2) + pow(y2-y1,2));
    return result;
}
// Minimalios paklaidos formulë;

bool isEqual(double x, double y)
{
    double epilson = 0.01f;
    if(fabs(x-y) < epilson)
        return true;
    return false;
}

int main()
{

    // Koordinaèiø ávedimas
    int x, y;
    cout << "Iveskite koordinate (X;Y), kuri bus tikrinama ar ieina i duotaja funkcija : " << endl;;
    cin >> x >> y;

    // Taðkai;
    double  x1 = -1, y1 = 0,
            x2 = 0, y2 = 1,
            x3 = 1, y3 = 0,
            x4 = 0, y4 = -1;

    // Bendras plotas;
    double A = atstum(x1, y1, x2, y2) * atstum (x2, y2, x3, y3);

    // Plotai;
    double A1 = plotas(x, y, x1, y1, x2, y2);
    double A2 = plotas(x, y, x2, y2, x3, y3);
    double A3 = plotas(x, y, x3, y3, x4, y4);
    double A4 = plotas(x, y, x4, y4, x1, y1);


    // Tikrinimai;
    double cx = 0, cy = 0, atstumas;

    atstumas = atstum(cx, cy, x, y);

    if(!isEqual(A, A1 + A2 + A3 + A4) && (atstumas <= 1))
    {
        cout << "Taskas priklauso duotai funkcijai." << endl;
    }
    else
    {
        cout << "Taskas nepriklauso duotai funkcijai." << endl;
    }
}
