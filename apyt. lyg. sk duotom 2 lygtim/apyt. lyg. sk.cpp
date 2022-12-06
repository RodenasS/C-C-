#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Funkcijos

double kos(double x)
{
    return cos(x) - x;
}
double e(double x)
{
    return exp(x)-3*x;
}
// Pagrindinë funkcija

int main()
{
    // Ávedimas

    double x, x1, y, y1, m, tiksl;
    cout << " Iveskite intervalo reiksmes: " << endl;
    cin >> x >> y;
    x1 = x; y1=y;

    cout << "Iveskite norima tiksluma: " << endl;
    cin >> tiksl;

    // Cos funkcija

    double (*funkc) (double) = kos;
    while (y-1 > tiksl)
    {
        m = (x+y)/2;
        if(funkc(m)*funkc(y) < 0 ) x = m;
        else y = m;
    }
    cout << "cos(x)=x rezultatas: " << setprecision(10) << (x+y)/2 << endl;

    // E funkcija

    funkc = e;
    while (y - 1 > tiksl)
    {
        m = (x1+y1)/2;
        if(funkc(m) * funkc(y) < 0) y1 = m;
        else y1 = m;
    }
    cout << "e^x=3x rezultatas: " << setprecision(10) << (x1+y1)/2 << endl;

    return 0;
}