
#include <stdio.h>
#include <string.h>

#define N 10

typedef char Chaine[15];

typedef struct _Client{
    unsigned short idClient; 
    Chaine nomClient;
}Client;

typedef Client Tab[N];


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

int main(int argc, char *argv[])
{
	

	}