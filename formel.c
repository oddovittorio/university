#include <stdio.h>

int main() {
    //Darstellung der Kopfzeile
    printf(" | A | B | C | D || E | G | H | I | J | K | F |\n");
    printf("-+---+---+---+---++---+---+---+---+---+---+---+-\n");
    // Schleife für Spalte A
    for (int A = 0; A <= 1; A++)
    {
        //Schleife für Spalte B
        for (int B = 0; B <= 1; B++)
        {
            //Schleife für Spalte C
            for (int C = 0; C <= 1; C++)
            {
                //Schleife für Spalte D
                for (int D = 0; D <= 1; D++)
                {
                    //Rechenoperationen
                    int E = A && !B;
                    int G = C || !D;
                    int H = D && !C;
                    int I = B || !A;
                    int J = !E || G;
                    int K = !H || I;
                    int F = J == K;
                    
                    //Ausgabe der Werte 0 und 1
                    printf(" | %d | %d | %d | %d || %d | %d | %d | %d | %d | %d | %d |\n", A, B, C, D, E, G, H, I, J, K, F);
                    
                }
            }
        }
    }

    return 0;
}
