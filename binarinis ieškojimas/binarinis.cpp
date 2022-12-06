#include <iostream>

using namespace std;

int binarinisieskojimas(int a[], int pirmas, int pask, int ieskom)
{
    int vid;

    if(pask >= pirmas)
    {
    vid = (pirmas + pask)/2;

    if(a[vid] == ieskom){ return vid+1; }

    else if(a[vid] < ieskom) { return binarinisieskojimas(a,vid+1,pask,ieskom); }

    else { return binarinisieskojimas(a,pirmas,vid-1,ieskom); }

    }
}

int main()
{
   int num[10] = {10, 15, 39, 47, 91, 159};
   int ieskom, viet=-1;

   cout<<"Iveskite skaiciu: ";
   cin>>ieskom;

   viet = binarinisieskojimas(num, 0, 6, ieskom);

   if(viet != -1)
   {
      cout<<ieskom<<" Masyvo vietoje yra: "<<viet;
   }
   else
   {
      cout<<"Skaicius nerastas";
   }
   return 0;
}
