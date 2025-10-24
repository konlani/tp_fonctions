//
// Created by marie on 24/10/2025.
//

#include "distributeur.h"
#include <stdio.h>
void consulterSolde(float solde)
{
    printf("Votre solde est de : %f\n", solde);
}

void retirerArgent(float* x)
{
    float somme;
    printf("Somme à retirer ?");
    scanf("%f", &somme);
    // modification du solde
    *x -= somme;
    // affichage du solde
    consulterSolde(*x);
}

void ajouterArgent(float* x)
{
    float somme;
    printf("Somme à déposer ?");
    scanf("%f", &somme);
    // modification du solde
    *x += somme;
    // affichage du solde
    consulterSolde(*x);
}