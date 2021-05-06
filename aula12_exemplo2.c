#include <stdio.h>
#include <stdlib.h>
/*
   Autor: Josildo      Data: 29/04/2021
   Enunciado:
       Desenvolva um programa que receba um conjunto de notas de uma turma
       e informe a média de turma. A digitação de notas é encerrada mediante
       questionamento ao usuário e deve-se assegurar que somente notas válidas
       (0 à 10) serão informadas.
*/

int main()
{
    int resp,c_nota;
    float nota,m,s_nota;

    c_nota = 0;
    s_nota = 0;
    m = 0;
    do
    {
        do  //iteraçao para validar a nota
        {
            printf("Informa uma nota: ");
            scanf("%f",&nota);
        } while ( !(nota>=0 && nota<=10) )  ;

        s_nota = s_nota + nota;
        c_nota = c_nota + 1;

        printf("Deseja sair [1=Sim; 0=Nao] ? ");
        scanf("%i",&resp);

    } while ( resp != 1 );

    if (c_nota>0)
    {
        m = s_nota/c_nota;
    }
    printf("Media da turma = %.2f",m);

    printf("Programa encerrado!!");

    return 0;
}
