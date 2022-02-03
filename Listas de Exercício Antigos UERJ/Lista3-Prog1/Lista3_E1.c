/* @jxvtrl */

#include <stdio.h>

int main (){
    int a,b;
    printf ("Entre com a: \n");
    scanf ("%d", &a);

    printf ("Entre com b: \n");
    scanf ("%d", &b);

    int temp = a;

    a = b;
    b = temp;

    printf ("Invertendo valores...");
    printf ("\na = %d\nb = %d", b, a);
    return 0;
}
