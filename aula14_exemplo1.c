#include <stdio.h>
#include <stdlib.h>

/*
   Autor: Josildo      Data: 12/05/2021
   Enunciado:
      Dado um número inteiro obrigatoriamente não negativo
      deve-se exibir seu fatorial.

   Programa principal:
      Subproblema-1 : entrada de dados (main)
      Subproblema-2 : calcular o fatorial (fatn)
      Subprograma-3 : exibir resultados (main)

*/

double fatn(double x)
{
/*
  x! = x*(x-1)*(x-2)..*1 = 5*4*3*2*1 = 120
  0! = 1

  f = 1

  i = 1
  f = f*i (1*1)

  i = 2
  f = f*i (1*2)

  i = 3
  f = f*i (2*3)

  i = 4
  f = f*i (6*4)

  i = 5
  f = f*i (24*5)

*/

   double f,i;

   f = 1;

   for (i=1; i<=x; i=i+1)
   {
       f = f*i;
   }

   return f;
}

int main()
{
    double n,fat;

    //Entrada de dados

    do{
       printf("Informe n: ");
       scanf("%lf",&n);
    } while (n<0);

    fat = fatn(n);

    //Resultados
    printf("O fatorial de %lf = %lf",n,fat);

    return 0;
}
