/*DESTREBECQ Clara, 08/09/2022*/

#include <stdio.h>

int c = 5;

float sum(int a, int b)
{
    int val;
    val = a + b;
    return val;
}

void main()
{
    int x = 2;
    int y = 6;
    int w = 9;
    int z = 5;
    int summ;
    int mult_const;
    int calc ;
    summ = sum(x, y);
    printf("valeur de sum: %d\n", summ);
    mult_const = summ * c;
    printf(" valeur de la multiplication de la somme par la constante %d\n", mult_const);
    calc = sum( w, z) + c - mult_const ;
    printf("valeur du calcul %d\n", calc);
}
