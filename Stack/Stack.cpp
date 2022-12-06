#include<iostream>
#include<stack>
#include <bits/stdc++.h>
// 1 uzduotis

/*

using namespace std;
void stekas(int skaicius) {
    stack<int> stk;
    while(skaicius > 0) {
        int liekana = skaicius % 2;
        skaicius = skaicius / 2;
        stk.push(liekana);
    }
    while(!stk.empty()) {
        int x;
        x = stk.top();
        stk.pop();
        cout << x;
    }
}
main() {
    int skaicius;
    cin >> skaicius;
    stekas(skaicius);
}
*/

// 2 uzduotis
/*
using namespace std;

void atvirkstinis(char tekstas[])
{
    stack<char*> s;
    char* token = strtok(tekstas, " ");

    while (token != NULL) {
        s.push(token);
        token = strtok(NULL, " ");
    }

    while (!s.empty()) {

        cout << s.top() << " ";
        s.pop();
    }
}

int main()
{
    char tekstas[] = "testavimo tekstas yra tekstas kuri testuosim";
    atvirkstinis(tekstas);

    return 0;
}
*/
// 3 uzduotis

using namespace std;

string Polindromas(string tekstas)
{
    for (int i = 0; i < tekstas.length() / 2; i++) {

        if (tekstas[i] != tekstas[tekstas.length() - i - 1]) {
            return "Ivestas tekstas ar zodis NERA polindromas";
        }
    }
    return "Ivestas tekstas ar zodis YRA polindromas";
}

int main()
{
    string tekstas = "aha";
    cout << Polindromas(tekstas);

    return 0;
}