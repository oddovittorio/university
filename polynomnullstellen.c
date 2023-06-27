#include <stdio.h>
#include <math.h>

// Hier wird das Polynom berechnet.
double doublePolynom(double x, double a0, double a1, double a2, double a3)
{
    return a3 * pow(x, 3) + a2 * pow(x, 2) + a1 * x + a0;
}

void polynom_ableitung(double a1, double a2, double a3, double *a0strich, double *a1strich, double *a2strich)
{
    *a2strich = 3 * a3;
    *a1strich = 2 * a2;
    *a0strich = a1;
}

void polynom_nullstellen(double *x, double a0, double a1, double a2, double a3)
{
    double x_old, x_new = *x, p, pstrich, a0strich, a1strich, a2strich;
    int max_iterations = 100, iterations = 0;

    do
    {
        x_old = x_new;
        p = doublePolynom(x_old, a0, a1, a2, a3);
        polynom_ableitung(a1, a2, a3, &a0strich, &a1strich, &a2strich); //Ableitung des Polynoms
        pstrich = a2strich * pow(x_old, 2) + a1strich * x_old + a0strich; //Wert der Ableitung des Polynoms

        x_new = x_old - p / pstrich;
        iterations++;

    } while(fabs(x_new - x_old) > 1e-14 && iterations < max_iterations); // Überprüft die Konvergenz und die maximale Anzahl von Iterationen

    if (iterations == max_iterations)
    {
        *x = NAN; // Setze x auf NaN, wenn keine Nullstelle gefunden wird
    }
    else
    {
        *x = x_new;
    }
}

int main(int argc, const char * argv[])
{
    double x, a0, a1, a2, a3, s;
    double a0strich, a1strich, a2strich;
    
    // Hier werden die Werte abgefragt.
    printf("Geben Sie einen Startwert x an\n");
    scanf("%lf", &x);
    
    printf("Geben Sie einen Wert für a0 an\n");
    scanf("%lf", &a0);
    
    printf("Geben Sie einen Wert für a1 an\n");
    scanf("%lf", &a1);
    
    printf("Geben Sie einen Wert für a2 an\n");
    scanf("%lf", &a2);
    
    printf("Geben Sie einen Wert für a3 an\n");
    scanf("%lf", &a3);
    
    // Funktion wird aufgerufen mit den jeweiligen Werten und das Ergebnis ausgegeben.
    s = doublePolynom(x, a0, a1, a2, a3);
    printf("Ihr Polynom p(x) an der Stelle x = %.3lf lautet p(%.3lf) = %.3lf\n",x , x, s);
    
    // Hier wird Ableitungsfunktion aufgerufen und ausgegeben.
    polynom_ableitung(a1, a2, a3, &a0strich, &a1strich, &a2strich);
    printf("Die Ableitung lautet: %.3lfx^2 + %.3lfx + %.3lf \n", a2strich, a1strich, a0strich);
    
    // Hier wird Nullstellenfunktion aufgerufen und ausgegeben.
    polynom_nullstellen(&x, a0, a1, a2, a3);
    if (isnan(x)) // Überprüfen ob x NaN ist, bevor Nullstelle ausgegeben wird
    {
        printf("Keine gültige Nullstelle gefunden.\n");
    }
    else
    {
        printf("Die Nullstelle des Polynoms ist: %lf \n", x);
    }
        
    return 0;
}