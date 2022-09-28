#include <stdio.h>
#define N 10



main()
{
int tabNote[N]={3, 1, 0, 7, 4, 17, 15, 9, 4, 18};
int i;
int s = 0;
float moy = 0;
int max;
int min;


/*lecture des valeurs du tableau*/
for (i=0; i < N; i++)
printf("%d ",*(tabNote+i));

/*boucle qui fait la moyenne des valeurs du tableau*/
   for(i = 0; i < 10; i++) {
      s = s + tabNote[i];
   }
   moy = (float)s / i;
   printf("\n La moyenne des valeurs du tableau est %.2f \n", moy);

      max=0;
      min=0;

      /*boucle qui trouve le max*/
      for (int i=0 ; i< N; i++)
      {
          if(tabNote[i]>max){
            max=tabNote[i];

          }
      }
      /*boucle qui trouve le min*/
       for (int i=0 ; i> N; i++)
      {
          if(tabNote[i]<min){
            min=tabNote[i];
          }
      }
      /*affichage du min et max*/
      printf("Minimum : %d\n Maximum : %d\n",min ,max);

      /* Ajout de 1 point à chaque note */
        for (i=0; i < N; i++)
        printf("%d ",*(tabNote+i) + 1);
        }
