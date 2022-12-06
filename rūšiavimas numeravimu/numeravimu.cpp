#include <iostream>

using namespace std;

// Void funkcijos 
void numeravimas(int m[], int b) {
  int a[10];
  int sk[10];
  int did = m[0];

  for (int i = 1; i < b; i++) {
    if (m[i] > did)
      did = m[i];
  }

  for (int i = 0; i <= did; ++i) {
    sk[i] = 0;
  }

  for (int i = 0; i < b; i++) {
    sk[m[i]]++;
  }

  for (int i = 1; i <= did; i++) {
    sk[i] += sk[i - 1];
  }

  for (int i = b - 1; i >= 0; i--) {
    a[sk[m[i]] - 1] = m[i];
    sk[m[i]]--;
  }

  for (int i = 0; i < b; i++) {
    m[i] = a[i];
  }
}

void isvedimas(int m[], int b) {
  for (int i = 0; i < b; i++)
    cout << m[i] << endl;
}

// Pagrindinë funkcija
int main() 
{

  int m[] = {9, 4, 3, 8, 7, 4, 1};

  // N gavimas naudojant sizeof
  int n = sizeof(m) / sizeof(m[0]);

  numeravimas(m, n);
  isvedimas(m, n);
}