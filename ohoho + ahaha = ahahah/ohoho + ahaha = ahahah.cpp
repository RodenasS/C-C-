#include <iostream>

using namespace std;

int main()
{

    // INT.
    int O,A,H,OHOHO,AHAHA,AHAHAH;

    // Ciklai.
    for(O = 0; O <= 9; O++) {
        for(H = 0; H <= 9; H++) {
            for(A = 0; A <= 9; A++) {
                OHOHO =10000 * O + 1000 * H + 100 * O + 10 * H + O;
                AHAHA =10000 * A + 1000 * H + 100 * A + 10 * H + A;
                AHAHAH =100000 * A + 10000 * H + 1000 * A + 100 * H + 10 * A + H;                                        
                if((OHOHO + AHAHA == AHAHAH) && (AHAHAH!=0))
                {
                    cout << "O = " << O << endl;
                    cout << "H = " << H << endl;
                    cout << "A = " << A << endl;
                }              
            }
        }
    }
    return 0;
}