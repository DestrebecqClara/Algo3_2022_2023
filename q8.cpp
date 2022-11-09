
#include <stdio.h>
#include <string.h>

#define N 10

typedef char Chaine[15];

typedef struct _Client{
    unsigned short idClient; 
    Chaine nomClient;
}Client;

typedef Client Tab[N];

int afficherDoublons(Tab t, int nbClients){
    int nbDoublons = 0;
    printf("\n-- Affichage des doublons (non prise en charge des triplons, quadruplons, etc...) --\n");
    for(int i = 0; i<nbClients; i++){
        for(int j = 0; j<nbClients; j++){
            if(i != j && t[j].idClient == t[i].idClient && strcmp(t[j].nomClient, t[i].nomClient) == 0){
                nbDoublons += 1;
                if((nbDoublons+1) % 2 == 0){
                    printf("\nId client : %d Nom client : %s Indice : %d\n", t[i].idClient, t[i].nomClient, i);
                }                    
                else{
                    printf("Id client : %d Nom client : %s Indice : %d\n", t[i].idClient, t[i].nomClient, i);              
                }
            }
        }
    }
    if(nbDoublons == 0){
        printf("\nPas de doublons dans le tableau !\n");
    }
    return nbDoublons/2;
}



int main(int argc, char *argv[])
{
	 Tab t;

    // Client *cp;
    // Client c1;
    // cp = &c1;

    Client c;
    c.idClient = 3;
    strcpy(c.nomClient, "c");

    int *nbClients;
    int nbclient = 0;
    nbClients = &nbclient;

    int *indiceIdMin;
    int indiceidmin = 0;
    indiceIdMin = &indiceidmin;

    int *indiceIdMax;
    int indiceidmax = 0;
    indiceIdMax = &indiceidmax;
nbDoublons = afficherDoublons(t, nbclient);
    printf("\nNombre de doublons : %d\n", nbDoublons);
    afficher(t, nbclient);
    printf("\n Apres modification\n");
    afficher(t, nbclient);

    nbDoublons = afficherDoublons(t, nbclient);
	}