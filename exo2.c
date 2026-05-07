#include <stdio.h>
#include <stdlib.h>
#define N 100

typedef struct{
    char* nom;
    char* prenom;
    int nbDisques;
    int anneeN;
}artiste;

void ajouterArtiste(artiste a);

int main(int argc, char* argv[]){
    artiste a;
    if (argc!=5){
        printf("il n'y a pas le bon nombres d'arguments \n");
    }
    else{
        a.nom=malloc(N*sizeof(char));
        a.nom=argv[1];
        a.prenom=malloc(N*sizeof(char));
        a.prenom=argv[2];
        a.nbDisques=atoi(argv[3]);
        a.anneeN=atoi(argv[4]);
        ajouterArtiste(a);
    }
}

void ajouterArtiste(artiste a){
    FILE* mesArtiste=NULL;
    mesArtiste=fopen("mesArtistes.csv","a");
    if(mesArtiste!=NULL){
        fprintf(mesArtiste,"%s;%s;%d;%d \n",a.nom,a.prenom,a.nbDisques,a.anneeN);
        fclose(mesArtiste);
    }
}