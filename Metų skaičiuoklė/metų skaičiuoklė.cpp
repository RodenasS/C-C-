#include <iostream>

using namespace std;

int main()
{
    int metai;

    cout << "Iveskite metus, kurie bus tikrinami ar jie yra keliamieji ar ne: ";
    cin >> metai;

    if (metai % 4 == 0)
    {
        cout << "Sie metai yra Julijaus kalendoriuje keliamieji metai." << endl;
        if (metai % 100 == 0 && metai % 400 == 0) {
            cout << "Tai pat ir Grigaliaus kalendoriuje keliamieji metai.";
        }
    }
    else
    {
        cout << "Sie metai nera keliamieji " << endl;
    }


    return 0;
}