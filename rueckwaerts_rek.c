#include <stdio.h>

void rekursion(void)
{
    char x = getchar(); //Sammeln der Eingabe auf der Variable x
    
    if( x != '\n')// Anweisung wird solange ausgeführt wie Entertaste nicht betätigt wird
    {
        rekursion(); //Rekursiver Aufruf
        putchar((char) x);// Zeichen werden in umgekehrter Reihenfolge ausgegeben wegen Stack von rekursion()
    }
}

int main(int argc, const char * argv[])
{
    printf("Geben Sie einen Satz ein:\n");
    rekursion();
    printf("\n"); // Dieses printf dient nur damit "Program enden.." nicht am ausgegebenen Text klebt.
    return 0;
}