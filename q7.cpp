
#include <stdio.h>
#include <string.h>

#define N 10

typedef char Chaine[15];

typedef struct _Client{
    unsigned short idClient; 
    Chaine nomClient;
}Client;

typedef Client Tab[N];
void rechercherIdMinMax(Tab t, int nbClients, int *indiceIdMin, int *indiceIdMax){
    int tempIdMin = t[0].idClient;
    int tempIdMax = t[0].idClient;
    for(int i = 1; i<nbClients; i++){
        if(t[i].idClient < tempIdMin){
            tempIdMin = t[i].idClient;
            *indiceIdMin = i;
        }
        if(t[i].idClient > tempIdMax){
            tempIdMax = t[i].idClient;
            *indiceIdMax = i;
        }  
    }
    printf("\nL'indice dans le tableau du client ayant l'id Client minimum : %d\n", *indiceIdMin);
    printf("L'indice dans le tableau du client ayant l'id Client maximum : %d\n", *indiceIdMax);
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
	    rechercherIdMinMax(t, nbclient, indiceIdMin, indiceIdMax);


	}


