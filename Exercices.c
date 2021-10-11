#include <stdio.h>
#include "Exercices.h"
#include "Fonctions.h"


#define MAX1 100
#define MAX2 12


void exercice1() {

    printf(" ---------------- EXERCICE 1 --------------- \n \n \n");

    NombreRationnel nb1 = SaisiNombreRationnel();
    NombreRationnel nb2 = SaisiNombreRationnel();
    NombreRationnel nb3 = MultiplicationNombreRationnel(nb1, nb2);
    NombreRationnel nb4 = AdditionNombreRationnel(nb1, nb2);

    affichageNombreRationnel(nb1);
    affichageNombreRationnel(nb2);
    printf("(par multiplication)\n");
    affichageNombreRationnel(nb3);
    printf("(par addition)\n");
    affichageNombreRationnel(nb4);

    printf("XXXXXXXXXX TEST PGCD XXXXXXXXXX \n");
    NombreRationnel nb5 = SaisiNombreRationnel();
    printf("PGCD : %d \n", PGCD(nb5));
    if (PGCD(nb1) == 0 || PGCD(nb1) == 1) {
        printf("Ce nombre Rationnel est indivisible \n");
    } else {
        nb1 = Simplification(nb1);
        affichageNombreRationnel(nb1);
    }
}



void exercice2() {

    printf(" ---------------- EXERCICE 2 ---------------- \n \n \n");

    int nbTot;
    int nb;
    int tab[MAX1];

    printf("Nombre d'entier a inserer ? \n");
    scanf("%d", &nbTot);
    if (nbTot > MAX1) {
        while (nbTot > MAX1) {
            printf("Resaisir l'entier ( inferieur a 100 ) \n");
            scanf("%d", &nbTot);
        }
    }
    for (int i = 1; i < nbTot + 1; ++i) {
        printf("saisir entier %d a inserer dans le tableau : \n", i);
        scanf("%d", &nb);
        tab[i] = nb;
    }
    for (int i = 1; i < nbTot + 1; ++i) {
        printf("Voici vos entiers saisit : \n");
        printf(" %d  : %d \n", i, tab[i]);
    }
}

void exercice3() {

    printf("------------------------ EXERCICE 3 -------------------- \n \n \n");
    int cpt = 1;
    int nb;
    int k = 0;
    int tab3x4[3][4];
    int tab12[MAX2];

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("Saisir nombre a inserer : (%d /12) \n",cpt++);
            scanf("%d", &nb);
            tab3x4[i][j] = nb;
        }
    }
    printf("Voici la tableau 3x4 : \n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf(" %d ", tab3x4[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            tab12[k] = tab3x4[i][j];
            ++k;
        }
    }
    printf(" Voici la tableau a une dimension qui copie les valeurs de celui a 2 dimensions : \n");
    for (int j = 0; j < MAX2; ++j) {
        printf("%d \n", tab12[j]);
    }
}