#include <stdio.h>
#include "distributeur.h"



int main(void)
{
    float solde = 100.0f;
    int choix;
    do
    {
        printf("Distributeur ECE :\n");
        printf("1: Consulter solde \n");
        printf("2: Retirer\n");
        printf("3: Deposer\n");
        printf("0: Recuperer carte \n");
        printf("Votre choix ? : \n");
        scanf("%d", &choix);

        switch (choix)
        {
        case CONSULTER: // consulter solde
            consulterSolde(solde);
            break;
        case RETIRER:
            retirerArgent(&solde);
            break;
        case AJOUTER:
            ajouterArgent(&solde);
            break;
        case RECUPERER:
            printf("N'oubliez pas votre carte \n");
            break;
        default:
            printf("Choix inconnu\n");
            break;
        }
    }
    while (choix);
    return 0;
}
