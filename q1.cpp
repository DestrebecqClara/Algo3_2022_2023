
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


int main(int argc, char *argv[])
{
	

	}