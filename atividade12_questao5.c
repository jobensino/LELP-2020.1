#include <stdio.h>
#include <stdlib.h>

/*
   Autor: Josildo     Data: 13/05/2021
   Enunciado:
      Construa um programa que receba um conjunto de números inteiros cuja
      quantidade de elementos não pode ultrapassar 100. Contudo, o usuário pode
      encerrar a digitação a qualquer momento. Ao final da digitação dos números o
      programa deve exibir:
*/

#define max_dig 100

int main()
{
    int resp,c_dig,n,c_div,c,c_primo,maior_primo;

    c_dig = 0;
    c_primo = 0;

    do
    {
        printf("Informe um numero: ");
        scanf("%i",&n);

        c_div = 0;
        for(c=1;c<=n;c=c+1)
            if (n%c==0) c_div++;

        //Primo
        if (c_div==2)
        {
            if (c_primo==0)
            {
                maior_primo = n;
            }
            else if (n>maior_primo)
            {
                maior_primo = n;
            }

            c_primo++;
        }

        printf("Deseja encerrar[%i/%i] [1-Sim; 0-Nao]: ? ",c_dig+1,max_dig);
        scanf("%i",&resp);

        c_dig = c_dig + 1;

    } while ( resp!=1 && c_dig<max_dig );

    if (c_primo>0)
        printf("maior primo %i, seu sucessor %i",maior_primo,maior_primo+1);
    else
        printf("Não houveram numeros primos");

    return 0;
}
