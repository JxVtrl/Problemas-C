/* @jxvtrl */

#include <stdio.h>
int main() {
    int n,c;

    printf("Digite um numero para ser verificado\n");
    scanf("%d",&n);

    for(c=1;c*(c+1)*(c+2)<n;c++);
    
    if(c*(c+1)*(c+2)==n){
		printf("%d * %d * %d faz com que %d seja triangular.",c,c+1,c+2,n);
	}
	else
	printf("%d Nao e triangular.",n);
    
    return 0;
}
    