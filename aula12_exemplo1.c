#include <stdio.h>
#include <stdlib.h>
/*
   Autor: Josildo      Data: 29/04/2021
   Enunciado:
      Desenvolva um programa que receba um conjunto de notas de uma turma e
      informe a quantidade de estudantes  aprovados,
      considerando nota de aprova��o maior ou igual � 7,0.
      Uma nota negativa encerra a sequ�ncia de notas.
*/

#define nota_aprovacao 7.0

int main()
{
    // Declara��o de vari�veis
    float nota;
    int c_aprov;

    printf("Informe uma nota: ");
    scanf("%f",&nota);

    c_aprov = 0;
    while (nota>=0)
    {
        if (nota>=nota_aprovacao)
        {
            c_aprov++;  // c_aprov = c_aprov + 1
        }

        printf("Informe uma nota: ");
        scanf("%f",&nota);
    }

    printf("Quantidade de aprovados: %i ",c_aprov);

    return 0;
}
