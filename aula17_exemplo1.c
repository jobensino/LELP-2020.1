#include <stdio.h>
#include <stdlib.h>

/*
   Autor: Josildo
   Enunciado:
      Dado uma turma de vinte alunos, desenvolver um programa usando matrizes
      que permita informar as notas da turma nas quatro unidades.
      Após preenchimento mostrar notas e média dos estudantes aprovados.
      Considere aprovados estudantes com média maior ou igual a 6,0.
*/

#define nlin  20
#define ncol  5
#define colmedia ncol-1

void preencheNota(float nt[nlin][ncol],int nl,int nc)
{
    int i,j;

    // Preenchimento das notas
    for (i=0;i<nl;i++)
    {
        for (j=0;j<nc-1;j++)
        {
            printf("nota[%i,%i]: ",i+1,j+1);
            scanf("%f",&nt[i][j]);
        }
    }
}

void calculaMedia(float nt[nlin][ncol],int nl,int nc)
{
    int i,j;
    float s;

    // Calculo da média
    for (i=0;i<nl;i++)
    {
        s = 0;
        for (j=0;j<nc-1;j++)
        {
            s = s + nt[i][j];
        }
        nt[i][colmedia] = s/4.0;
    }
}

void exibeAprovados(float nt[nlin][ncol],int nl,int nc)
{
    int i,j;

    // Exibição das notas
    for (i=0;i<nl;i++)
    {
        if (nt[i][nc-1]>=6.0)
        {
            printf("aluno: %i\n",i+1);
            for (j=0;j<nc-1;j++)
            {
                printf("n_%i=%.2f \t",j+1,nt[i][j]);
            }
            printf("media=%.2f \t",nt[i][nc-1]);
            printf("\n");
        }
    }

}

int main()
{
    float notas[nlin][ncol],s;

    preencheNota(notas,nlin,ncol);
    calculaMedia(notas,nlin,ncol);
    exibeAprovados(notas,nlin,ncol);

    return 0;
}
