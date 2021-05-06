#include <stdio.h>
#include <stdlib.h>
/*
   Autor: Josildo      Data: 29/04/2021
   Enunciado:
      Desenvolva um programa que receba um conjunto de notas de uma turma e
      informe a quantidade de estudantes  aprovados,
      considerando nota de aprovação maior ou igual à 7,0.
      Uma nota negativa encerra a sequência de notas.
*/

#define nota_aprovacao 7.0

int main()
{
    // Declaração de variáveis
    float nota;
    int c_aprov;

    c_aprov = 0;

    do
    {
        printf("Informe uma nota: ");
        scanf("%f",&nota);

        if (nota>=nota_aprovacao)
        {
            c_aprov++;
        }

    } while(nota>=0);

    printf("Quantidade de aprovados: %i",c_aprov);

    return 0;
}
