#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
 !!FRAGE!!: Mein erster Anlauf die Position der Wörter zu finden war wie folgt(Code kommt noch). Ich verstehe nicht wieso er mir nicht die richtigen Positionen ausgeben konnte. Ich habe andauern die Positionen: 35 58 60 bekommen. Leider habe ich es trotz ewig langem probieren nicht geschafft eine Lösung für dieses Problem zu finden oder in erster Linie überhaupt verstanden wieso es nicht geht. Ich würde mich sehr freuen wenn Sie mir helfen könnten.
Code:
 void positionSuchen(char *pk)
 {
     char zielWort[] = "programming";
     char *position = strcstr(pk, zielWort);
     
         while(position != NULL)
         {
             printf("%ld\n", *position - *pk);
             pk = position + strlen(zielWort);
                   position = strstr(pk, zielWort);
         }
 }
 */

void positionSuchen(char *pk)
{
    char zielWort[] = "programming";
    char *original_pk = pk;  //Original-Zeiger

    while((pk = strstr(pk, zielWort)) != NULL) //Ich habe mich jetzt extra auf "programming" (mit Kleinbuchstaben) fokussiert, da "programming" != "Programming".
    {
        printf("Das Muster \"%s\" wurde an Position %ld gefunden.\n", zielWort, pk - original_pk);  // pk = aktuelle Position im Index, original_pk = Erstes Zeichen im Index
        for (int i = 0; i < strlen(zielWort); i++)
        {
            pk[i] = toupper(pk[i]);  // Umwandeln von Klein- in Großbuchstaben.
        }
        pk += strlen(zielWort); // pk wird um eine Position nach rechts vom Zielwort bewegt. (Befindet sich auf p & wird um die Länge des Wortes verschoben)
    }
}

int main(int argc, const char * argv[])
{
    // ==================== Eingabe ====================
    char input[1000] = {0};
    char x = ' ';
    int zaehler = 0;
    
    printf("Geben Sie einen Text ein und bestätigen Sie mit Enter.\n");
    
    while(x != '\n') //Text kann eingegeben werden solange kein Enter zum absenden gedrückt wird.
    {
        scanf("%c", &x);
        input[zaehler] = x;
        zaehler++;
    }
    input[zaehler-1] = '\0';
    // ================== Verarbeitung ==================
        positionSuchen(input);
    // ===================== Ausgabe ====================
    for(int i = 0; i < zaehler; i++) //Gesamtes Array wird in neuer Form ausgegeben.
    {
        printf("%c", input[i]);
    }
    printf("\n");
    return 0;
}