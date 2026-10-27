#include <stdio.h>

int *max(int *a, int *b);

int main(){
    int a,b, *p;
    printf("enter 2 numbers:\n");
    printf("a=");scanf("%d",&a);
    printf("b=");scanf("%d",&b);
    // we can take result of a function as pointer and then use it anywhere for futher functionality.....
    p = max(&a ,&b );// var p which is pointer storing the memory location of 
    printf("%d is at address of %p",*p,p);

    //##########################################
    /*Never return a pointer to an automatic local variable:
int *f(void)
{
  int i;
…
  return &i;
}
The variable i doesn’t exist once f returns, so the pointer to it will be invalid.
Some compilers issue a warning such as “function returns address of local vari
able” in this situation*/

}

int *max(int *a, int *b){
    if(*a > *b){
        return a;
    }
    else{
        return b;
    }


}