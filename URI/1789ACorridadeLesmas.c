/* @jxvtrl */

#include <stdio.h>
int main(){
    int entrada,casos,lesma,max=0;
    while(scanf("%d",&entrada)!=EOF){
        for(casos=1,max=0; casos<=entrada; casos++){
            scanf("%d", &lesma);
            if(lesma>max){
                max = lesma;
            }
        }
        if(max<10){
            printf("1\n");
        }
        else if(max<20){
            printf("2\n");
        }
        else{
            printf("3\n");
        }
    }
    return 0;
}