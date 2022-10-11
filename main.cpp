#include <stdio.h>

/*EXERCICE 1*/
/*
int longueur (char *c)
{
    int i;
	int valeur = 0;
     for (i = 0; c[i] != '\0'; i++)
    { valeur ++; }
    return valeur;
}

int longueur_recursive(char *c){
	if(*c == '\0'){
		return 1;
	}
	else {
		
		return 1+longueur(c);}
	
	
	}
char afficheInverse(char *c)
{
	int n,i;
	int j=0;
	n = longueur (c); 
	char *inverse;
	char *p, *r;
	p= & c[0];
	r= &inverse[0];
	for(i=n;i>0;i--)
	{ 
		*(inverse + j)= *(c + i);
		j++;
		p++;
		r++;
	}
	return *inverse;
}*/
	
int main (int argc , char * argv[])
{
	
	/*EXERCICE 1*/
	/*int l = 0;
	char *test  = "Test";
	printf("%s",test);
	longueur(test, &l);
	printf("%d\n",l);
	printf("%d",longueur_recursive(test));
	longueur("toto",&l);

	afficheInverse("Toto");*/
   
}


