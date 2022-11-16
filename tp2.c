#include <stdio.h>
#define N 10

typedef int Tab[N];

int somme(Tab t, int n, int i )
{ int res=0;
printf ("Calcul de la somme a partir de l’indice %d :\n",i);
if (i<n)
{ printf ("\t appel du calcul de la somme a partir de l’indice %d :\n",i+1);
res=t[i]+somme(t,n,i+1);
printf ("\t addition avec t[%d]\n",i );
}
printf ("\t Somme a partir de l’indice %d = %d\n\n",i,res);
return res ;
}
//question 2
int somme2(Tab t, int n){
	if(n==0){
		return t[0];
		}else {
			return(t[n]+somme2(t,n-1));}
	}
//question 1
void affiche(int *t, int n,int i)
{
	
	if(i<=n) {
		printf("%d\n",t[i]);
		affiche(t,n,i+1);
		}
}
//question 4
void afficheDecroissant(Tab t, int n)
{
if(n==0)
{
	printf("%d",t[0]);

}
else
{
	printf("%d",t[n]);
	afficheDecroissant(t,n-1);
}}
//question 3
int nbElemV(Tab t, int n,int v){
	if(n==0){
		return 0;
		} else{
			if(t[n]>v){
				return (1+nbElemV(t,n-1,v));}
			else {return (nbElemV(t,n-1,v));}}
				
				}
//question 5
int RechercheV(Tab t, int n, int v){
	if(n<0){
	return -1;}
	else if (t[n]==v){
		return n;}
	else{return RechercheV(t, n-1, v);}
	
	}
 //question 6
void tri_du_tableau(Tab t, int n)
{
    int tampon;
    int i,j;
    for(i=0;i<=(n-1);i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(*(t+i)>*(t+j))
            {
                tampon=*(t+i);
                *(t+i)=*(t+j);
                *(t+j)=tampon;
            }
        }
    }
}
int Recherche_dicho(Tab t, int v, int g, int d, int * r) 
{
    tri_du_tableau(t,g);
    int ret= g + (d-g)/2;
    if (t[ret] == v)
    {
        *r=ret;
		return *r;
    }
    else
    {
        if(t[ret] > v)
        {
             Recherche_dicho(t,v,g,ret,r); 
        }
        else
        {

            if(t[ret] < v)
            {
                 Recherche_dicho(t,v,ret,d,r);
            }
            else
            {
                return -1;
            }
        }
    }

}
int main()
{ Tab t1 = {4,2,8,0,7,3,1,5,9,6};
int i=0;
int r=0;
affiche(t1, 9,i);
printf ("La somme des entiers du tableau t1 = %d\n",somme(t1,N,0));
printf("la reponse de la fonction somme a deux paaram est : %d\n",somme2(t1,9));
printf("le nbr d'element est :%d\n", nbElemV(t1,9,6));
printf("l'indice de l'element recherche est %d\n", RechercheV(t1,9,1));
tri_du_tableau(t1,9); 
affiche(t1,9,i);
printf("recherche dichotomique d'une valeur v %d", Recherche_dicho(t1,4,0,9,&r));
}
