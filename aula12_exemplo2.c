#include <stdio.h>
#include <stdlib.h>
/*
   Autor: Josildo      Data: 29/04/2021
   Enunciado:
       Desenvolva um programa que receba um conjunto de notas de uma turma
       e informe a m�dia de turma. A digita��o de notas � encerrada mediante
       questionamento ao usu�rio e deve-se assegurar que somente notas v�lidas
       (0 � 10) ser�o informadas.
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
        do  //itera�ao para validar a nota
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
