
#include <stdio.h>
#include <string.h>

#define N 10

typedef char Chaine[15];

typedef struct _Client{
    unsigned short idClient; 
    Chaine nomClient;
}Client;

typedef Client Tab[N];


void modifierNom(Tab t, int nbClients, int i){
    Chaine nouveauNom;
    if(i <= nbClients){
        printf("\nModifiez le nom du client numero %d : ", i);
        scanf("%s", nouveauNom);
        strcpy(t[i].nomClient, nouveauNom);
    }
}

int main(int argc, char *argv[])
{
	Tab t;

	int *nbClients;
    int nbclient = 0;
    nbClients = &nbclient;
	modifierNom(t, nbclient, 2);


	}