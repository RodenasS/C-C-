#include <cmath>
#include <iostream>
#include <fstream>

using namespace std;

// Void funkcijos
void Nuskaitymas(int &n, int x[], int y[])
{
    ifstream fd("Duomenys.txt");
    fd >> n;
    for (int i = 0; i < n; i++)
    {
        fd >> x[i] >> y[i];
    }
}

void Isvedimas(int &n, int x[], int y[], double atstumas[])
{
    ofstream fr("Rezultatai.txt");
    double did = 0;
    int x1, y1;

    for (int i = 0; i < n; i++)
        {
            // atstumo skaièiavimo formulë
            atstumas[i] = sqrt(pow(x[i],2) + pow(y[i],2));

            fr << "koordinates: (" << x[i] << ";" << y[i] << ") atstumas = " << atstumas[i] << endl;

            // diþziausio atstumo ieðkojimas
            if(atstumas[i] > did)
            {
                did = atstumas[i];
                x1 = x[i];
                y1 = y[i];
            }
        }
    // iðvedimas didþiausios 
    fr << endl << "Didziausias atstumas: " << did << " , koordinaciu: (" << x1 << ";" << y1 << ")" << endl;
}

// Pagrindinë funkcija
int main()
{
    int n, x[20], y[20];
    double atstumas[50];
    
    Nuskaitymas(n, x, y);
    Isvedimas(n, x, y, atstumas);

    return 0;
}