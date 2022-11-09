
#include <stdio.h>
#include <string.h>

#define N 10

typedef char Chaine[15];

typedef struct _Client{
    unsigned short idClient; 
    Chaine nomClient;
}Client;

typedef Client Tab[N];

void afficher(Tab t, int nbClients){
    for(int i = 0; i<nbClients; i++){
        printf("\nId client : %d\n", t[i].idClient);
        printf("Nom du client : %s\n", t[i].nomClient); 
    }
}


int main(int argc, char *argv[])
{
	
	Tab t;

	
    int *nbClients;
    int nbclient = 0;
    nbClients = &nbclient;
    
	afficher(t, nbclient);


	}