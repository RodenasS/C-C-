#include <iostream>
using namespace std;

// Keliamuju metu skaiciuokle:

int l_year(int year)
{
    return( (year % 4 ==0) && (year % 100 != 0));
}

// Metu dienu skaiciuokle:

int nbd_years(int y1, int y2)
{
    int dienusk = 0;

    for(int i = y1; i < y2; i++)
    {
        if(l_year(i))
        {
            dienusk += 366;
        }
        else
        {
            dienusk += 365;
        }
    }
    return dienusk;
}

// Menesio dienu + likusiu dienu skaiciuokle:

int nbd_months(int y, int m, int d)
{
    int dienos = 0;
    int dienusk = 0;

    for(int men = 1; men <= m; men++) {
        switch(men) {
            case 1: dienusk = 31; break;
            case 2: if(l_year(y)) dienusk = 29; else dienusk = 28; break;
            case 3:dienusk = 31;break;
            case 4:dienusk = 30; break;
            case 5:dienusk = 31;break;
            case 6:dienusk = 30;break;
            case 7:dienusk = 31;break;
            case 8:dienusk = 31;break;
            case 9:dienusk = 30;break;
            case 10:dienusk = 31;break;
            case 11:dienusk = 30;break;
            case 12:dienusk = 31;break;
        }
        dienos += dienusk;
    }
    return dienos + d;
}

int main()
{
    int y1,y2, m1, m2, d1, d2, skirtumas;

    // Ivedimai ir tikrinimai:
    
    cout << " Iveskite pirmaja data formatu : YYYY MM DD" << endl;
    cin >> y1 >> m1 >> d1;

    if(y1 >= 0 && y1<= 9999 && m1 > 0 && m1 <= 12 && d1 > 0 && d1 <= 31)
    {
        cout << " Iveskite antraja data formatu : YYYY MM DD" << endl;
        cin >> y2 >> m2 >> d2;

        if(y2 >= 0 && y2<= 9999 && y1<=y2 && m2 > 0 && m2 <= 12 && d2 > 0 && d2 <= 31)
        {
            skirtumas = nbd_years(y1,y2) - nbd_months(y1,m1,d1) + nbd_months(y2,m2,d2);
            cout << y1 << " " << m1 << " " << d1 << " ir " << y2 << " " << m2 << " " << d2 << " skiria - " << skirtumas << " dienos. " << endl;
        }
        else cout << " Antroji ivesta data yra negalima. ";
    }
    else cout << "Pirmoji ivesta data yra negalima. ";

    return 0;
}
