#include <stdio.h>

int main(void) {
    int lato1,lato2,lato3;
    printf("inserire il primo lato:");
    scanf("%d",&lato1);
    printf("inserire il secondo lato:");
    scanf("%d",&lato2);
    printf("inserire il terzo lato:");
    scanf("%d",&lato3);
    if(lato1==lato2 && lato2==lato3){
    printf("il triangolo è equilatero");
    }
    else if(lato1==lato2) {
        printf("il triangolo è isoscele");
    }

    else if(lato3==lato2){
    printf("il triangolo è isoscele");
    }else if( lato1==lato3){
    printf("il triangolo è iscoscele");
    }else{
        printf("il triangolo è scaleno");
    }
}
