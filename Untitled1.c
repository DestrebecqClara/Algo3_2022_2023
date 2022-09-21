#include<stdio.h>
 void permute(int *a,int * b){
      int o = *a;
      *a = *b;
      *b = o;
 }

void * minetmax(void * a, void * b, void * c) {
  void * p;

  if (a >= b)
    p = a;
  else
    p = b;
  if (p < c)
    p = c;

  return p;
}


void main(){
    int i=9, j=6;
    int a = 2, b = 5, c = 8;
    printf("i=%d, j=%d\n", i , j);
    permute(&i, &j);
    printf("i=%d, j=%d\n", i , j);
    minetmax(a,b,c);
    printf("le minimum et maximum son %d %d %d \n", a, b, c  );

int n;
char car;
printf("Entrez la valeur de n");
scanf ("%d", &n);
printf("Entrez la valeur de c \n");
scanf ("%c", &car);
printf("la valeur de n est %d \n", n);
printf("l'adresse de n est %d \n", &n);

printf("la valeur de c est %c \n", car);
printf("l'adress du caractere est %c \n", &car);


}
