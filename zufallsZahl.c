#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Pseudecode aus Aufgabe A:
//Programm starten

//Initialisiere den Zufallsgenerator

//Deklariere und initialisiere Variablen:
    //zaehler = 0
    //nutzerEingabe = 0
    //zufallsZahl = generiere eine zufällige Zahl zwischen 1 und 30

//Solange nutzerEingabe nicht gleich zufallsZahl und zaehler kleiner als 5 ist:
    //Frage den Benutzer: "Wie lautet die geheime zufällige Zahl?"
    //Lies nutzerEingabe ein

    //Überprüfe, ob nutzerEingabe außerhalb des Bereichs von 1 bis 30 liegt:
        //Wenn ja, gib eine Fehlermeldung aus: "Ungültige Eingabe! Bitte geben Sie eine Zahl zwischen 1 und 30 ein."
        //und gehe zur nächsten Iteration der Schleife, ohne den Zähler zu erhöhen.

    //Wenn nutzerEingabe kleiner als zufallsZahl ist:
        //Sage dem Benutzer: "zu klein!"
    //Ansonsten, wenn nutzerEingabe größer als zufallsZahl ist:
        //Sage dem Benutzer: "zu groß!"

    //Erhöhe zaehler um 1

//Wenn nutzerEingabe gleich zufallsZahl ist:
    //Sage dem Benutzer: "Richtig geraten! Die geheime Zahl war [zufallsZahl]"
//Ansonsten:
    //Sage dem Benutzer: "Leider haben Sie die Zahl nicht erraten. Die geheime Zahl war [zufallsZahl]"

//Programm beenden

int main()
{
    srand(time(NULL));
    
    int zaehler = 0, zufallsZahl, nutzerEingabe = 0;
    
    zufallsZahl = 1 + rand()%30;
    
    while(nutzerEingabe != zufallsZahl && zaehler < 5)
    {
        printf("Wie lautet die geheime zufällige Zahl?\n");
        scanf("%d", &nutzerEingabe);


           if(nutzerEingabe < 1 || nutzerEingabe > 30)
        {
            printf("Ungültige Eingabe! Bitte geben Sie eine Zahl zwischen 1 und 30 ein.\n");
            continue;
        }
        if(nutzerEingabe < zufallsZahl)
        {
            printf("zu klein!\n");
        }
        else if (nutzerEingabe > zufallsZahl)
        {
            printf("zu groß!\n");
        }
        zaehler++;
    }

    if(nutzerEingabe == zufallsZahl)
    {
        printf("Richtig geraten!\nDie geheime Zahl war %d\n", zufallsZahl);
    }
    else
    {
        printf("Leider haben Sie die Zahl nicht erraten. Die geheime Zahl war %d\n", zufallsZahl);
    }
   
    return 0;
}
