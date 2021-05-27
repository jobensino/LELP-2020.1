#include <stdio.h>
#include <stdlib.h>
/*
   Autor: Josildo
   Enunciado:
       Dado uma turma de vinte alunos, desenvolver um
       programa usando vetores que permita informar as
       notas da turma. Após preenchimento deve-se acrescer
       todas notas de 0,5 ponto e exibir as notas na ordem inversa
       (do último valor informado para o primeiro).
   Programa principal:
      Subproblema-1: preenchimento do vetor
      Subproblema-2: Adicionar pontos extras ao vetor
      Subproblema-3: Mostrar elementos do vetor

*/

void preencheVetor(float v[],int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        printf("Informe notas[%i]: ",i+1);
        scanf("%f",&v[i]);
    }
}

void addPontosVetor(float v[],int n,float extra)
{
    int i;

    for(i=0;i<n;i++)
    {
        v[i] = v[i]+extra;
    }

}

void exibeVetor(float v[],int n)
{
    int i;

    for(i=n-1;i>=0;i=i-1)
    {
        printf("notas[%i]=%f \n",i+1,v[i]);
    }
}

#define q1_ne 5

void questao1()
{
    float notas[q1_ne];

    preencheVetor(notas,q1_ne);
    addPontosVetor(notas,q1_ne,0.5);
    exibeVetor(notas,q1_ne);
}

void questao2()
{
   printf("Em construcao...\n");
}


int main()
{
    int op;

    do {
       printf("1. Questao bom professor\n");
       printf("2. Questao primos\n");
       printf("9. Sair\n");
       scanf("%i",&op);

       if (op==1)
          questao1();

       if (op==2)
          questao2();
    } while(op!=9);

    return 0;
}
