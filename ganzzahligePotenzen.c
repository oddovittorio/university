//
//  main.c
//  Ganzzahlige Potenzen
//
//  Created by Vittorio Oddo on 08.06.23.
//

/*
Pseudocode:
 
Funktion zur Berechnung der Potenz (Basis, Exponent)
Beginne mit einer Zahl y, y = 1.

Fall 1: Der Exponent ist eine Zahl zwischen 0 und +inf
  Multipliziere y so oft mit der Basis, wie der Exponent angibt.

Fall 2: Der Exponent ist eine Zahl > 0
  Multipliziere y so oft mit der Basis, wie der Betrag des Exponenten angibt.
  Danach teile 1 durch das Ergebnis, um y neu zu berechnen.

Gib am Ende y zurück.

Hauptprogramm:
Frage den Benutzer nach Basiszahl und speichere sie.
Frage den Benutzer nach Exponent und speichere ihn.
Verwende Funktion zur Berechnung der Potenz mit Basis und Exponenten und speichere Ergebnis.
Zeige Ergebnis an.
Beende das Programm.
*/
    
#include <stdio.h>

double iPow(double base, int exponent) {
    double y = 1;
    int i;

    //Exponent Eingabe  n >= 0
    if (exponent >= 0)
    {
        for(i = 0; i < exponent; i++)
        {
            y *= base;
        }
    }
    //Exponent Eingabe n < 0
    else
    {
        for(i = 0; i < -exponent; i++)
        {
            y *= base;
        }
        y = 1.0 / y;
    }
    
    return y;
}

int main(int argc, const char * argv[]) {
    double base, x;
    int exponent;
   
    printf("Geben Sie einen Wert für die Basis ein: \n");
    scanf("%lf", &base);
    
    printf("Geben Sie eine Potenz ein: \n");
    scanf("%d", &exponent);
    
    x = iPow(base, exponent);

    printf("%.3lf\n", x);
    
    return 0;
}