//
//  main.c
//  janein
//
//  Created by Vittorio Oddo on 07.05.23.
//

#include <stdio.h>

int main()
{
    int zahl;
// Start-Punkt für die goto-Anweisung
start:
    //Abfrage und Eingabe
    printf("Hast du schon am Übungsblatt gearbeitet?\n(Gib 1 für 'Ja' bzw. 0 für 'Nein' ein.)");
    scanf("%d", &zahl);
    
    //Definieren der Antwortmöglichkeiten
    if(zahl == 1)
    {
        printf("Ausgezeichnet!\n");
        return 0;
    }
    else if (zahl == 0)
    {
        goto start;
    }
    else
    {
        printf("Mit dieser Antwort kann ich nichst anfangen.\n");
        goto start;
    }
}
