
#include <stdio.h>
#include <string.h>

#define N 10

typedef char Chaine[15];

typedef struct _Client{
    unsigned short idClient; 
    Chaine nomClient;
}Client;

typedef Client Tab[N];


int rechercheClient(int idClient, Tab t, int nbClients, int *indiceClient){
    for(int i = 0; i<nbClients; i++){
        if(t[i].idClient == idClient){
            *indiceClient = i;
            printf("\nle client recherche avec l'id %d est : %d", idClient, *indiceClient);
            return 1;
        }
    }
    return 0;
}

int main(int argc, char *argv[])
{    
	Tab t;
	
    int *nbClients;
    int nbclient = 0;
    nbClients = &nbclient;
	  
    int *indiceClient;
    int indiceclient = 0;
    indiceClient = &indiceclient;
	
	rechercheClient(3, t, nbclient, indiceClient);

	

	}