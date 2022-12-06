#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Ploto skaièiavimo formulë:
float plotas(int x1, int y1, int x2, int y2, int x3, int y3)
{
 return abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2);
}

int main()
{

  // Duoti taðkai (-1;1), (1;0), (1;1)

    float x, y, x1, x2, x3, y1, y2, y3;
    cout << "Iveskite taska A, kuris bus tikrinamas ar priklauso trikampio funkcijai y=|x| {-1;1} :" << endl;
    cin >> x >> y;

    // Plotø skaièiavimas:
   float bendras = plotas(-1, 1, 1, 0, 1, 1);
   float pirmas = plotas(x, y, 1, 0, 1, 1);
   float antras = plotas(-1, 1, x, y, 1, 1);
   float trecias = plotas(-1, 1, 1, 0, x, y);

   // Tikrinam ar bendras lygus maþesniø sumai.

    if(bendras == pirmas + antras + trecias){ cout << " Taskas ieina i trikampi. "; }
    else { cout << "Taskas neieina i trikampi. "; }
}
