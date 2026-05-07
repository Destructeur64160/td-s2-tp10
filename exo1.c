#include <stdio.h>
#include <stdlib.h>
#define N 100
#define AGE(anneeNaissance) (2026 - (anneeNaissance))

typedef struct{
    char nom[N];
    char* prenom;
    int anneeNaissance;
    int nbPoints;
}joueur;

int main(){
    int nbjoueurs;
    joueur* tabjoueurs;
    printf("Combien de joueur voulez vous réer?");
    scanf("%d",&nbjoueurs);
    tabjoueurs=malloc(nbjoueurs*sizeof(joueur));
    for (int i=0; i<nbjoueurs; i++){
        printf("nom:");
        scanf("%s", tabjoueurs[i].nom);
        printf("prenom:");
        tabjoueurs[i].prenom=malloc(N*sizeof(char));
        scanf("%s", tabjoueurs[i].prenom);
        printf("Annee de naissance:");
        scanf("%d", &tabjoueurs[i].anneeNaissance);
        printf("PointsATP:");
        scanf("%d", &tabjoueurs[i].nbPoints);
        printf("mon age est %d",AGE(tabjoueurs[i].anneeNaissance));
        printf("\n");
    }
    #ifdef TAB
        printf("tableau des joueurs \n");
        for(int i=0; i<nbjoueurs; i++){
            printf("| prenom:%s; nom:%s; annee de naissance:%d; nb points:%d | \n", tabjoueurs[i].prenom, tabjoueurs[i].nom, tabjoueurs[i].anneeNaissance, tabjoueurs[i].nbPoints);

        }
    #endif
    for (int i = 0; i < nbjoueurs; i++) {
        free(tabjoueurs[i].prenom);
    }
    free(tabjoueurs);
    return 0;
}