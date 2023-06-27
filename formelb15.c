//HINWEIS: Dieser Code funktioniert NICHT für besonders hohe Zahlen. Ich habe bewusst nur integer gewählt da es mir wichtig war die Aufgabe zu lösen und nicht einen Code zu schreiben der besonders hohe Zahlen addieren kann. Um einen Overflow zu vermeiden -> Datentyp und Format-Specifier in scanf und printf verändern.

#include <stdio.h>

//Globale Variablen definieren, Ich habe dies nicht in der main definiert, da das Programm ziemlich klein ist und ich keine Sorge habe, dass ich die Variablen in einer der Funktionen versehentlich überschreibe. Andernfalls hätte ich diese in der Main deklariert.

int a, b;

// Einlesen Funktion. Die Pointer zeigen auf Grund der main auf die Speicheradressen von a und b.
void einlesen(int *pX, int *pY)
{
      
    printf("Welche Zahl wollen Sie addieren?\n");
    scanf("%d", pX); //Festlegen welcher Wert zu Speicheradresse a gebracht werden soll.
    printf("Welche Zahl soll dazu addiert werden?\n");
    scanf("%d", pY); //Festlegen welcher Wert zu Speicheradresse b gebracht werden soll.
    
}

//Wert der Variablen a und b wird unmittelbar an die Funktion übergeben.
int ausgeben_value(int a, int b)
{
    return a + b;
}

//Funktion muss erstmal schauen auf welche Speicheradressen die Pointer schauen um die Werte dieser Speicheradressen zu ermitteln.
int ausgeben_ref(int *pA, int *pB)
{
    int h;
    
    h = *pA + * pB;
    return h;
}


int main(int argc, const char * argv[])
{
    //Funktion Einlesen wird ausgeführt mit den Speicheradressen von a und b als Parameter.
    einlesen(&a, &b);
    
    //ausgeben_value wird ausgeführt, die Parameter a und b übergeben unmittelbar den Wert der Variablen an die Funktion. -> Wert der Variablen wurde in Funktion einlesen() bestimmt.
    int s = ausgeben_value(a,b);
    printf("Die Berechnung der ausgaben_value Funktion: %d + %d = %d\n", a, b, s);
  
    //ausgeben_ref wird mit den Parametern der Speicheradressen von a und b übergeben. Die Pointer wissen nun wo sie die Werte zu suchen haben.
    int t = ausgeben_ref(&a, &b);
    printf("Die Berechnung der ausgaben_ref Funktion: %d + %d = %d\n", a, b, t);
    
    return 0;
}