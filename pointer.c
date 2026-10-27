#include <stdio.h>

int *max(int *a, int *b);

int main(){
    int a,b, *p;
    printf("enter 2 numbers:\n");
    printf("a=");scanf("%d",&a);
    printf("b=");scanf("%d",&b);

    p = max(&a ,&b );
    printf("%d is at address of %p",*p,p);

    //##########################################

}

int *max(int *a, int *b){
    if(*a > *b){
        return a;
    }
    else{
        return b;
    }


}