#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
  Autor: Josildo     Data: 28/04/2021
  Enunciado:
     Desenvolva um programa que receba nome e idade de trinta pessoas
     e informe nome e idade do mais jovem.

*/

#define qtd_nomes 30
#define qtd_letras 50

int main()
{
    int c;
    char nome[51],nome_jovem[51];
    int idade,idade_jovem;

    for ( c=1; c<=qtd_nomes; c++ )
    {
        printf("\nNome[%i] = ",c);
        scanf("%50[^\n]s",nome);

        printf("\nIdade[%i] = ",c);
        scanf("%i",&idade); getchar();

        if (c==1) //Primeiro nome,idade digitados
        {
            strcpy(nome_jovem,nome);
            idade_jovem = idade;
        }
        else
        {
            if (idade<idade_jovem)
            {
                strcpy(nome_jovem,nome);
                idade_jovem = idade;
            }
        }
    }

    printf("\nnome do mais jovem=%s",nome_jovem);
    printf("\nidade do mais jovem=%i",idade_jovem);

    return 0;
}
