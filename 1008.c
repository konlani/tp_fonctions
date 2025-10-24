#include <stdio.h>
#include "insta.h"

int main(void) {
    int nbLikes ;
    int nbCommentaires;
    int nbAbonnes ;
    float taux;

    printf("Rentrez votre nombre d'abonnés: ");
    scanf("%d", &nbAbonnes);
    printf("Rentrez votre nombre de likes: ");
    scanf("%d", &nbLikes);
    printf("Rentrez votre nombre de comentaires : ");
    scanf("%d", &nbCommentaires);

    //procedure
    taux = tauxEngagement(nbLikes, nbCommentaires, nbAbonnes );

    printf("\n ----------------\n");
    printf("Nombre d'abonnés : %d \n", nbAbonnes);
    printf("Nombre de likes : %d\n", nbLikes);
    printf("Nombre de commentaires : %d\n", nbCommentaires);
    performance(taux);


    return 0;
}
