#include <stdio.h>

int swapped = 0;

void swap(double *pk, double *pg)
{
  if(*pk < *pg)
  {
      double tmp = *pg;
      *pg = *pk;
      *pk = tmp;
      swapped = 1;
  }
}

int main(int argc, const char * argv[])
{
    // ============ Variablen =============
    double i[100]; // Deklaration von einem double array der groesse 100
    int index = 0;
    double j = 1;
    
    
    // ============ Eingabe ================
    printf("Geben Sie die gewünschten Zahlen ein und bestätigen sie mit Enter.\nEs sind maximal 100 Zahlen erlaubt.\nMit 0 Beenden Sie die Eingabe.\n\nDie Zahlen lauten:\n");
    while(j != 0)
    {
            scanf("%lf", &j); // Abfrage von Werten
        if(index >= 100)
        {
            printf("Die maximale Anzahl an Zahlen ist erreicht.");
            break;
        }
        
            if(j != 0)
            {
                i[index] = j ; // Jede Zahl ausser 0 wird akzeptiert und in den Feldern von i gespeichert
                index++; // index wird erhöht um zum naechsten Feld zu gelangen
            }
        }
    // =============== Verarbeitung =================
    
    printf("\nSortierung der Zahlenfolge: \n");
    do{
        for (int k = 0; k < index; k++)
        {
            
            for (int g = 0; g < index; g++) {
                swapped = 0;
                swap(&i[k], &i[g]); // Zwei Felder werden verglichen und gegebenenfalls vertauschen
            }
            for (int x = 0 ; x < index; x++)
            {
                printf("%.2lf, ", i[x]); // Ausgabe mit gewünschter Reihenfolge
            }
            printf("\n");
        }
    }while (swapped == 1);
    
    // =============== Ausgabe ===================
    
    printf("\nDie aufsteigende Reihenfolge lautet: ");
    for (int x = 0 ; x < index; x++)
    {
        printf("%.2lf, ", i[x]); // Ausgabe mit gewünschter Reihenfolge
    }
    
    
    return 0;
}
