#include <stdio.h>
#include "Fonctions.h"


void affichageNombreRationnel( NombreRationnel nb1) {
    printf("Votre nombre : %d | %d \n", nb1.numerateur, nb1.denominateur);
}
 NombreRationnel SaisiNombreRationnel() {
     NombreRationnel nb1;
    printf("Saisir le numerateur : \n");
    scanf("%d", &nb1.numerateur);
    printf("Saisir le denominateur : \n");
    scanf("%d", &nb1.denominateur);

    return nb1;
}
NombreRationnel MultiplicationNombreRationnel( NombreRationnel nb1,  NombreRationnel nb2) {
    NombreRationnel nb3;
    nb3.numerateur = nb1.numerateur * nb2.numerateur;
    nb3.denominateur = nb1.denominateur * nb2.denominateur;
    return nb3;
}
 NombreRationnel AdditionNombreRationnel( NombreRationnel nb1,  NombreRationnel nb2) {
     NombreRationnel nb3;
    nb3.numerateur = (nb1.numerateur * nb2.denominateur) + (nb1.denominateur * nb2.numerateur);
    return nb3;
}

int PGCD(NombreRationnel nb1){
    int DivCommun = 0;
    int PlusPtit = 0;
    if (nb1.numerateur < nb1.denominateur){
        PlusPtit = nb1.numerateur;
    } else if(nb1.numerateur > nb1.denominateur){
        PlusPtit = nb1.denominateur;
    }else {
        DivCommun = nb1.denominateur;
        return DivCommun;
    }
    for (int i = PlusPtit; i > 1; --i) {
        if(nb1.denominateur % i == 0 && nb1.numerateur % i == 0) {
            DivCommun = i;
            return DivCommun;
        }else if ((nb1.numerateur % i != 0 || nb1.denominateur % i != 0) && (i == 2)){
            return 0;
        }
    }
}
NombreRationnel Simplification(NombreRationnel nb1){
    int pgcd;
    pgcd = PGCD(nb1);
    while (pgcd != 1){
        nb1.denominateur = (nb1.denominateur/pgcd);
        nb1.numerateur = (nb1.numerateur/pgcd);
        if(PGCD(nb1) == 1){
        return nb1;
    }else if(PGCD(nb1) == 0){
            return nb1;
        } else{
            pgcd = PGCD(nb1);
        }
    }

}