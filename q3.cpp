
#include <stdio.h>
#include <string.h>

#define N 10

typedef char Chaine[15];

typedef struct _Client{
    unsigned short idClient; 
    Chaine nomClient;
}Client;

typedef Client Tab[N];


void saisie(Client *c){
    printf("\nVeuiller Entrer l'id du client : ");
    scanf("%hd", &c->idClient);
    printf("ensuite Entrer le nom du client : ");
    scanf("%s", c->nomClient);
}

int ajouter(Client c, Tab t, int *nbClients){
    if(*nbClients == N){
        return 0;
    }
    else{
        t[*nbClients] = c;
        *nbClients += 1;
        return 1;
    }
}

int saisieClients(Tab t, int p, int *nbClients){
    if(*nbClients == N){
        return 0;
    }
    else{
        for(int i=0; i<p; i++){
            Client c = t[*nbClients + i];
            saisie(&c);
            ajouter(c, t, nbClients);
        }
        return 1;
    }
}


int main(int argc, char *argv[])
{
	Tab t;
	 int *nbClients;
    int nbclient = 0;
    nbClients = &nbclient;
	
	saisieClients(t, 5, nbClients);

    

	}