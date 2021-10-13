#include <stdio.h>
#include "Fonctions.h"
#include "Exercices.h"


int main() {


    int choixExercice = 0;
    printf("XXXXXXXXX - TP5 - XXXXXXXXXXX\n \n");

    do {
        printf("Choisissez quelle exercice voulez-vous lancer : (1 - 3)");
        scanf("%d", &choixExercice);
        switch (choixExercice) {
            case 1:
                printf("Vous avez choisit de lancer l' exercice 1 \n");
                exercice1();
                break;
            case 2:
                printf("Vous avez choisit de lancer l' exercice 2 \n");
                exercice2();
                break;
            case 3:
                printf("Vous avez choisit de lancer l' exercice 3 \n");
                exercice3();
                break;
            default:
                printf("Vous avez chois une exercice qui n'existe pas \n");
        }

    } while (choixExercice != 0);

    printf("Fin du TP5 \n");
}