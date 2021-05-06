#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
   Autor: Josildo       Data: 05/05/2021
   Enunciado:
      Desenvolva um programa que receba nome e idade de um
      conjunto de pessoas e informe nome e idade da pessoa mais jovem.
      A idade deve ser validada (somente idades positivas são aceitas).
      A sequência de dados se encerra mediante questionamento ao usuário.
*/

int main()
{
    char nome[61],nome_jovem[61];
    int idade,resp,idade_jovem,c_digitados;

    c_digitados = 0;
    do
    {
        // Entrada de dados
        printf("Informe um nome: ");
        scanf("%[^\n]s",nome);

        do   // validando a idade obrigatoria positivo
        {
            printf("Informe uma idade: ");
            scanf("%i",&idade);
        } while (idade<=0);

        // descobrir o mais jovem
        if (c_digitados == 0)
        {
            idade_jovem = idade;
            strcpy(nome_jovem,nome);
        }
        else  //a partir do segunda idade
        {
            if (idade<idade_jovem)
            {
               idade_jovem = idade;
               strcpy(nome_jovem,nome);
            }
        }
        c_digitados++;

        printf("Deseja continuar [1=Sim; 0=Nao] ? ");
        scanf("%i",&resp); getchar();

    } while (resp!=0);

    // Resultados
    printf("O jovem eh %s com %i anos.",nome_jovem,idade_jovem);
}
