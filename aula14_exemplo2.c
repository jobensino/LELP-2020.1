#include <stdio.h>
#include <stdlib.h>

/*
   Autor: Josildo     Data: 13/05/2021
   Enunciado:
      Dados os três valores 𝑎, 𝑏, 𝑐 quaisquer verificar se os valores
      representam os lados de um triângulo, e se essa condição for
      verdadeira informar se é triângulo retângulo ou não.
   Problema principal:
      Subproblema-1: entrada de dados(main)
      Subproblema-2: verificar se é triangulo (ehTriangulo)
      Subproblema-3: verificar se é triangulo retangulo(ehRetangulo)
      Subproblema-4: exibir resultados(main)
*/

int ehTriangulo(float x,float y,float z)
{
/*
   Esta função aplica a condição de existência de um triangulo
   e retorna 1 se os lados formarem um triangulo ou 0 do contrário
*/

    if ( (x<y+z) && (y<x+z) && (z<x+y) )
    {
       return 1;
    }
    else
    {
       return 0;
    }
}

int ehRetangulo(float m,float n,float p)
{
/*
   Esta função recebe os tres de um triangulo e verifica
   se é retangulo (retorna 1) ou não (retorna 0)
*/
   float m2,n2,p2;

   m2 = m*m;
   n2 = n*n;
   p2 = p*p;

   if ( (m2==n2+p2) || (n2==m2+p2) || (p2==m2+n2) )
   {
       return 1;
   }
   else
   {
       return 0;
   }
}

int main()
{
    float a,b,c;

    // Entrada de dados
    printf("Informe lado(a): ");
    scanf("%f",&a);

    printf("Informe lado(b): ");
    scanf("%f",&b);

    printf("Informe lado(c): ");
    scanf("%f",&c);

    if (ehTriangulo(a,b,c)==1)
    {
        printf("\nTriangulo OK!!\n");
        if (ehRetangulo(a,b,c)==1)
        {
            printf("Triangulo retangulo!!\n");
        }
        else
        {
            printf("Triangulo nao retangulo!!\n");
        }
    }
    else
    {
        printf("Triangulo nao OK!!");
    }
    return 0;
}
