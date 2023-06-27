//
//  main.c
//  starships.c
//
//  Created by Vittorio Oddo on 28.04.23.
//

#include <stdio.h>

// Zweiter Zweig der Star Trek / Star Wars Fragen

void star_trek_questions2()
{
    int choice;
    printf("Bin ich im Delta-Quadranten? 0: ja, 1: nein ");
    scanf("%d", &choice);
    if (choice == 0)
    {
        printf("Ich bin die USS Voyager.\n");
    }
    else if(choice == 1)
    {
        printf("Ich bin die USS Enterprise.\n");
    }
    else
    {
        printf("Diese Eingabe ist ungültig.\n");
    }
}

void star_wars_questions2()
{
    int choice;
    printf("Bin ich rund? 0: ja, 1: nein ");
    scanf("%d", &choice);
    if (choice == 0)
    {
        printf("Ich bin der Death Star.\n");
    }
    else if (choice == 1)
    {
        printf("Ich bin ein Tie Fighter.\n");
    }
    else
    {
        printf("Diese Eingabe ist ungültig.\n");
    }
}

void star_trek_questions3()
{
    int choice;
    printf("Bin ich klingonisch? 0: ja, 1: nein\n");
    scanf("%d", &choice);
    if (choice == 0)
    {
        printf("Ich bin ein Bird-of-Prey.\n");
    }
    else if(choice == 1)
    {
        printf("Ich bin ein Borg Cube.\n");
    }
}

void star_wars_questions3()
{
    int choice;
    printf("Hab ich nur einen Pilotensitz? 0: ja, 1: nein ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("Ich bin der Millenium Falcon.\n");
    }
    else if (choice == 0)
    {
        printf("Ich bin ein X-Wing.\n");
    }
}

// Erster Zweig der Star Trek / Star Wars Fragen

void star_trek_questions1()
{
    int choice;
    printf("Gehöre ich zur Starfleet? 0: ja, 1: nein ");
    scanf("%d", &choice);
    if (choice == 0)
    {
        star_trek_questions2();
    }
    else if (choice == 1)
    {
        star_trek_questions3();
    }
}

void star_wars_questions1()
{
    int choice;
    printf("Zu wem gehöre ich? 0: Imperium, 1: Rebellen ");
    scanf("%d", &choice);
    if (choice == 0)
    {
        star_wars_questions2();
    }
    else if (choice == 1)
    {
        star_wars_questions3();
    }
    else
    {
        printf("Diese Eingabe ist ungültig.\n");
    }
}

 // Abfrage des Universums
int main()
{
    int choice;
    
    printf("Ich bin ein Raumschiff.\nAus welchem Universum stamme ich? (0: Star Trek, 1: Star Wars) ");
    scanf("%d", &choice);
    
    if (choice == 0)
    {
        star_trek_questions1();
    }
    else if (choice == 1)
    {
        star_wars_questions1();
    }
    else
    {
        printf("Diese Eingabe ist ungültig.\n");
    }
}

