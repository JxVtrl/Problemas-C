/* Esse programa se trada da primeira
    aula de Intro a Prog (2nd Try) 
*/

#include <stdio.h>
/* Uso da stdio.h
    - Declaração da função main()
    - Declaração de variáveis
    - Entrada de dados
    - Processamento
    - Saída de dados
*/
#include <math.h>
/* Uso da math.h
    - Declaração de funções matemáticas
*/

// int main() {
//     printf("Olá Mundo!\n");
//     return 0;
// }

/* Imprimindo Nome em duas linhas */
void main() 
{
    printf("João\nVinicius\n\n");
    consigo();
}

/* Imprimindo que estou conseguindo programar */
void consigo()
{
    printf("Estou\nconseguindo\n\nprogramar.\n");
    asteriscos();
}

/* Imprimindo asteriscos */
void asteriscos()
{
    for (int d = 0; d < 6; d++) {
        for (int i = 0; i < d; i++) printf("*");
        printf("\n");
    }
    printf("\n");
    soma();
}

void soma() 
{
    int a, b, soma; // Declarando variaveis
    printf("Digite o primeiro numero: ");
    scanf("%d", &a); // Entrada de dados

    printf("Digite o segundo numero: ");
    scanf("%d", &b); // Entrada de dados

    soma = a + b; // Processamento

    printf("A soma dos numeros e: %d\n", soma); // Saída de dados
}
