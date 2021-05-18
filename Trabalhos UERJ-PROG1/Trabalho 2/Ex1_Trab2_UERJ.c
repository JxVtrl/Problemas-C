/*
  
@jxvtrl 

Exercicio Número 1 do Trabalho 2 de Introdução a Programação

*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int i, n, c[MAX];

void Base()
{
    printf("O valor de N é a quantidade de termos da função\n");
    printf("Entre com o valor de N: ");
    scanf("%d", &n);

    printf("\nDigite os coeficientes do polimônio p(x): \n");

    
    for (i = n-1; i > 0; i--)
    {
        printf("Digite o coeficiente de x^%d: ", i);
        scanf("%d", &c[i]);
    }

    printf("Digite o coeficiente constante: ");
    scanf("%d", &c[0]);

    printf("\n\t\tP(x)  = ");
    for (i = n-1; i >= 0; i--)
    {
        if (i==0)
        {
            if (c[0]>=0)
            {
                printf("+ %d ", c[0]);
            }
            else if (c[0]<0)
            {
                printf(" %d ", c[0]);
            }
        }

        else if (i<n)
        {
            if (c[i] >= 0)
            {
                printf("+ %dx^%d ", c[i], i);
            }
            else if (c[i] < 0)
            {
                printf(" %dx^%d ", c[i], i);
            }
        }

    }
 
}

// Letra A
int Derivada_Letra_A()
{
    printf("\n\n\t\tP(x)' = ");
    for (i = n-1; i > 0; i--)
        {
            if(i==1)
            { 
                if(c[1]>=0)
                {
                    printf("+ %d", c[1]);
                }
                else if (c[1]<0)
                {
                    printf(" %d", c[1]);
                }

            }
            else if(i>1)
            {
                if (c[i]>=0)
                {
                    printf("+ %dx^%d ", i*c[i],i-1);
                }

                if (c[i]<0)
                {
                    printf(" %dx^%d ", i*c[i],i-1);
                }
            }
        }
    printf("\n\n\n");

    return i;
    
}

// Letra B
int Calcula_Valor_Letra_B()
{
    int i=0,a;

    printf("\nInsira um valor de 'a' para a calcular o P(a): ");
    scanf("%d",&a);
    i=1;
    int soma=c[0];

    for(i=1; i<=n; i++)
    {
        soma = soma + c[i]*pow(a,i); 
    }

    printf("\n\t\tP(%d) = %d\n\n\n", a, soma);

    return soma;
    
}

// Letra C
int i, n, valores_Px[100], valores_dPx[100], valores_d2Px[100];

int Main_Letra_C()
{
    Px();
    dPx();
    d2Px();
    /*
        conta   =        p'(p(a) - 1)    +   p''(a + 4)
        conta   =        p'(pa - 1)      +   p''(B)
        conta   =        p'(result)          Segun_Termo
        conta   =        Prim_Termo      +   Segun_Termo            
    */
    int a, pa;
    printf("\nInsira um valor de 'a' para a calcular o P(a): ");
    scanf("%i", &a);

    pa = Resolver_Px(a);
    
    
    int result;
    result = pa - 1;

    int Prim_Termo;
    Prim_Termo = Resolver_dPx(result);

    int B;
    B = a + 4;

    int Segun_Termo;
    Segun_Termo = Resolver_d2Px(B);

    int conta;
    conta = Prim_Termo + Segun_Termo;


    //printf("\n\n\n O resultado de  p'(p(a) - 1)    +   p''(a + 4)   ∵    %i   +   %i    =   %i\n\n\n", Prim_Termo, Segun_Termo, conta);
    printf("\n\n\n O resultado de  p'(p(a) - 1)    +   p''(a + 4)   ∵\n");
    printf("\t\t p'(%i - 1)    +   p''(%i + 4)   ∵", pa, a);
    printf("\n\t\t p'(%i)    +   p''(%i)   ∵", result, B);
    printf("\n\t\t %i    +   %i   =    %i", Prim_Termo, Segun_Termo, conta);
    printf("\n\n");

}

int Px()
{
    printf("Entre com o valor de n: ");
    scanf("%d", &n);

    printf("\nDigite os coeficientes do polimônio p(x): \n");

    for (i = n-1; i > 0; i--)
    {
        printf("Digite o coeficiente de x^%d: ", i);
        scanf("%d", &valores_Px[i]);
    }

    printf("Digite o coeficiente constante: ");
    scanf("%d", &valores_Px[0]);

    printf("\n\t\tP(x)  = ");
    for (i = n-1; i >= 0; i--)
    {
        if (i==0)
        {
            if (valores_Px[0]>=0)
            {
                printf("+ %d ", valores_Px[0]);
            }
            else if (valores_Px[0]<0)
            {
                printf(" %d ", valores_Px[0]);
            }
        }

        else if (i<n)
        {
            if (valores_Px[i] >= 0)
            {
                printf("+ %dx^%d ", valores_Px[i], i);
            }
            else if (valores_Px[i] < 0)
            {
                printf(" %dx^%d ", valores_Px[i], i);
            }
        }

    }

    return 0;
}

int dPx()
{
    printf("\n\n\t\tP(x)' = ");
    for (i = n-1; i > 0; i--)
        {
            if(i==1)
            { 
                if(valores_Px[1]>=0)
                {
                    valores_dPx[1] = valores_Px[1]; 
                    printf("+ %d", valores_dPx[1]);
                }
                else if (valores_Px[1]<0)
                {
                    valores_dPx[1] = valores_Px[1]; 
                    printf(" %d", valores_dPx[1]);
                }

            }
            else if(i>1)
            {
                if (valores_Px[i]>=0)
                {
                    valores_dPx[i] = i*valores_Px[i];
                    printf("+ %dx^%d ", valores_dPx[i],i-1);
                }

                if (valores_Px[i]<0)
                {
                    valores_dPx[i] = i*valores_Px[i];
                    printf(" %dx^%d ", valores_dPx[i],i-1);
                }
            }
        }

    return i;
}

int d2Px()
{
    printf("\n\n\t\tP(x)'' = ");
    for (i = n-2; i > 0; i--)
        {
            if(i==1)
            { 
                if(valores_dPx[2]>=0)
                {
                    valores_d2Px[2] = valores_dPx[2]; 
                    printf("+ %d", valores_d2Px[2]);
                }
                else if (valores_dPx[2]<0)
                {
                    valores_d2Px[2] = valores_dPx[2]; 
                    printf(" %d", valores_d2Px[2]);
                }

            }
            else if(i>1)
            {
                if (valores_dPx[i]>=0)
                {
                    valores_d2Px[i] = i*valores_dPx[i];
                    printf("+ %dx^%d ", valores_d2Px[i],i-1);
                }

                if (valores_dPx[i]<0)
                {
                    valores_d2Px[i] = i*valores_dPx[i];
                    printf(" %dx^%d ", valores_d2Px[i],i-1);
                }
            }
        }
    printf("\n\n\n");

    return i;
}

int Resolver_Px(int A)
{
    int i=0,a;

    a = A;

    
    int soma=valores_Px[0];

    for(i=1; i<=n; i++)
    {
        soma = soma + valores_Px[i]*pow(a,i); 
    }

    printf("\n\t\tP(%d)  = %d\n\n", a, soma);

    return soma;
}

int Resolver_dPx(int A)
{
    int i=0, a;

    a = A;


    int soma=0;


    for(i=n; i>0; i--)
    {
        soma = soma + valores_dPx[i]*pow(a,i-1); 
    }

    printf("\n\t\tP(%d)'  = %d\n\n", a, soma);
    
    return soma;
}

int Resolver_d2Px(int A)
{
    int i=0, a;

    a = A;


    int soma=0;


    for(i=n; i>0; i--)
    {
        soma = soma + valores_dPx[i]*pow(a,i-2); 
    }

    printf("\n\t\tP(%d)''  = %d\n\n", a, soma);
    
    return soma;
}

// Main
int main() 
{
    Base();

    printf("\n\n");
    system("pause");

    printf("\n\n\nLetra A)\n\n");
    Derivada_Letra_A();

    system("pause");

    printf("\n\n\nLetra B)\n\n");
    Calcula_Valor_Letra_B();

    system("pause");

    printf("\n\n\nLetra C)\n\n");
    Main_Letra_C();

    return 0;
}