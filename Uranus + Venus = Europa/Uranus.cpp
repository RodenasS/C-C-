#include <iostream>

using namespace std;

int main()
{

    // INT.
    int U, R, A, N, S, V, E, O, P, URANUS, VENUS, EUROPA;

    // Ciklai.
    for(O = 0; O <= 9; O++) {
        for(U = 0; U <= 9; U++) {
            for(R = 0; R <= 9; R++) {
                for(A= 0; A <= 9; A++) {
                    for(N = 0; N <= 9; N++) {
                        for(S = 0; S <= 9; S++) {
                            for(V = 0; V <= 9; V++) {
                                for(E = 0; E <= 9; E++) {
                                    for(P = 0; P <= 9; P++) {
                                        URANUS = U*100000 + R*10000 + A*1000 + N*100 + U*10 + S;
                                        VENUS = V*10000 + E*1000 + N*100 + U*10 + S;
                                        EUROPA = E*100000 + U*10000 + R*1000 + O*100 + P*10 + A;
                                        if((URANUS + VENUS == EUROPA) && (EUROPA != 0))
                                        {
                                            cout << "U = " << U << endl;
                                            cout << "R = " << R << endl;
                                            cout << "A = " << A << endl;
                                            cout << "N = " << N << endl;
                                            cout << "S = " << S << endl;
                                            cout << "V = " << V << endl;
                                            cout << "E = " << E << endl;
                                            cout << "O = " << O << endl;
                                            cout << "P = " << P << endl;
                                            
                                            return 0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}