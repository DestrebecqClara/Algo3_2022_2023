

#include <stdio.h>
#include <string.h>

#define N 10

typedef char Chaine[15];

typedef struct _Client{
    unsigned short idClient; 
    Chaine nomClient;
}Client;

typedef Client Tab[N];



int ajouterSansDoublon(Client c, Tab t, int *nbClients){
    for(int i=0; i<*nbClients; i++){
        if(t[i].idClient == c.idClient && strcmp(t[i].nomClient, c.nomClient) == 0){
                printf("\nLe client voulant etre ajoute existe deja.\n");
                return 0;
        }   
    }
    ajouter(c, t, nbClients);
    printf("\nClient qui a pour id : %d et nom : %s a ete ajoute en position : %d\n", c.idClient, c.nomClient, *nbClients-1);
    return 1; 
}

int enleverClient(int idClient, Chaine nomClient, Tab t, int *nbClients){
    int temp_i;
    int a = 0;
    while(a==0){
        for(int i=0; i<*nbClients; i++){ 
            if(t[i].idClient == idClient && strcmp(t[i].nomClient, nomClient) == 0){
                temp_i = i;
                a = 1;
            }
        }
        if(a==0){
            printf("\nLe client souhaite n'a pas ete enleve car il n'existe pas.\n");
            return 0;
        }
    }
    for(int i = temp_i; i<*nbClients; i++){
        t[i] = t[i+1];
    }
    *nbClients -= 1;
    return 1;
}

int main(int argc, char *argv[])
{
	Tab t;



    Client c;
    c.idClient = 3;
    strcpy(c.nomClient, "c");

    int *nbClients;
    int nbclient = 0;
    nbClients = &nbclient;
    
    int *indiceClient;
    int indiceclient = 0;
    indiceClient = &indiceclient;

    int *indiceIdMin;
    int indiceidmin = 0;
    indiceIdMin = &indiceidmin;

    int *indiceIdMax;
    int indiceidmax = 0;
    indiceIdMax = &indiceidmax;

    int nbDoublons;
	
	ajouterSansDoublon(c, t, nbClients);
	}