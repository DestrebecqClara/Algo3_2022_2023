#include <stdio.h>
#include <stdlib.h>
#define MA
typedef int Tab[100];

void permute(Tab t, int i, int j)
{
    int temp;
    temp=t[i];
    t[i]=t[j];
    t[j]=temp;
}
int partitionner ( Tab t, int debut ,int fin)
{
    int p=t[debut];
    int i = debut - 1 ;
    int j=fin + 1  ;
    int fini = 0;
    while (!fini)
    {
       do{i++;} while(t[i]<p); 
       do{j=(j-1);} while(t[j]>=p );
       if(i<j)
        {
            permute(t,i,j);
        }
        else
            {
                fini =1;
            }

    }
    return j;
}

int partitionner2 ( Tab t, int debut ,int fin)
{
    int p=t[(debut+fin)/2];
    int i = debut - 1 ;
    int j=fin + 1  ;
    int fini = 0;
    while (!fini)
    {
       do{i++;} while(t[i]<p); 
       do{j=(j-1);} while(t[j]>=p ); 
       if(i<j)
        {
            permute(t,i,j);
        }
        else
            {
                fini =1;
            }

    }
    return j;
}



void triRapide(Tab t, int debut, int fin)
{
    int p; // pivot
    if(debut<fin)
    {
        p=partitionner(t,debut,fin);
        triRapide(t,debut,p);
        triRapide(t,p+1,fin);
    }

}

void triRapide2(Tab t, int debut, int fin)
{
    int p;
    if(debut<fin)
    {
        p=partitionner2(t,debut,fin);
        triRapide2(t,debut,p);
        triRapide2(t,p+1,fin);
    }
}

void affichage(Tab t, int n )
{
    for(int i=0; i<n;i++)
    {
        printf(" %d ", *(t+i));
    }
}
int main()
{
 Tab t={3,17,9,15,2,7,10,9,8,12};
 affichage(t,10);
 printf("\n");
 printf("before call triRapide");
 triRapide(t,0,10);
 printf("CHAT");
 affichage(t,10);
}


//EXERCICE 2

#include <stdio.h>
#include <stdlib.h>
#define MAX 100
typedef int Tab[MAX];


void affichage(Tab t, int n)
{
    for(int i=0; i<n;i++)
    {
        printf("%f ",t[i]);
    }
}
void permuter(Tab t, int i, int j)
{
    int temp;
    temp=t[i];
    t[i]=t[j];
    t[j]=temp;
}
void triTableau(Tab t, int n)
{
    int i,j;
   for(i=0;i<n-1;i++)
    {
        for(j=i;j<n;j++)
        {
            if(t[i]>t[j])
            {
                permuter(t,i,j);
            
        }
    }
}
void fusion(Tab t1, int n1, Tab t2, int n2) 
{
    int i,j;
    Tab t3;
    if(n1+n2 <= MAX)
    {
    for(i=0; i<n1;i++)
    {
        t3[i]=t1[i];
    }
    for(j=0;j<n2;j++)
    {
        t3[j+n1]=t2[j];
    }
    }
    triTableau(t3,n1+n2);
    affichage(t3,n1+n2);
}


int main()
{
    Tab t1={12,5,6,14,3};
    Tab t2={2,8,7,3,4};
    affichage(t1, 5);
    printf("\n");
    affichage(t2,5);
    printf("\n");
    fusion(t1,5,t2,5);
}