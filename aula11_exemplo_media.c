#include <stdio.h>
#include <stdlib.h>
/*
  Autor: Josildo     Data: 28/04/2021
  Enunciado:
     Desenvolva um programa que receba vinte números inteiros e
     mostre quantidade de impares e a média dos pares.

*/
int main()
{
    int c,n,c_impar,s_par,c_par;

    c_impar = 0;
    c_par = 0;
    s_par = 0;

    for (c=1;c<=4;c++)
    {
        printf("Informe n[%i]: ",c);
        scanf("%i",&n);

        if (n % 2 == 1)
        {
            c_impar = c_impar+1;
        }

        if (n % 2 == 0 && n != 0) //evitando zeros no calculo da media
        {
            s_par = s_par + n;
            c_par = c_par + 1;
        }
    }

    printf("\nQuantidade de números impares = %i",c_impar);

    if (c_par>0)
        printf("\nmedia dos pares = %f",(float)s_par/c_par);
    else
        printf("\nnão houve numeros pares!!");
    return 0;
}
