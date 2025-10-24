//
// Created by marie on 24/10/2025.
//

#include "insta.h"
#include <stdio.h>

float tauxEngagement(int nbLikes, int nbCommentaires, int nbAbonnes ){
    float taux = (float)(nbLikes + nbCommentaires)/(float)nbAbonnes *100;
    return (taux>100) ? 100: taux;
}

void performance(float const taux){
    if(taux < 1){
        printf("Taux d'engagement %.2f %% faible", taux);
    } else if (taux < 10){
        printf("Taux d'engagement %.2f %% moyen", taux);
    } else{
        printf("Taux d'engagement %.2f %% élevé", taux);
    }
}