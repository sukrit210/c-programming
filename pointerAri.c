#include <stdio.h>

int main(){
    // POINTER ARITHEMATIC//
    // int num[10] ={1,2,3,4,5,6,7,8,91,10};
    // int *p,*q,*r;
    // p=&num[0];
    // q=&num[5];
    // printf("%d is at location of %p\n", *p,p);
    // printf("%d is at location of %p\n", *q,q);
    // p += 3;
    // r=p+1;
    // printf("%d is at location of %p\n", *p,p);
    // printf("%d is at location of %p\n", *r,r);
    // it is shifting by adding int in the memory address...
    // FOR LOOP OR LOOPING//
    // for(p=&num[0];p<&num[10];p++){
    //     printf("%d\n",*p);
    // }
    /*
         Expression
*p++ or *(p++)
(*p)++
*++p or *(++p)
++*p or ++(*p)
                                         Meaning
Value of expression is *p before increment; increment p later
Value of expression is *p before increment; increment *p later
Increment p first; value of expression is *p after increment
Increment *p first; value of expression is *p after increment
    */
int p[10];
// *p=1;
// *(p+1) = 2;  // you can assign values like this ,, means first pointer arithematic then the dereferencing..
int sum;
int *i;
printf("assign values:::\n");
for(i=p;i<p+10;i++){
    scanf("%d",i);
}
// the upper for loop can be written as ---->  To simplify the loop, we can replace &a[0] by a and &a[N] by a + N
for(i=p;i<p+10;i++){
    printf("%d ",*i);
    sum += *i;
}
printf("\n");
for(i=p+9;i>=p;i--){
    printf("%d ",*i);
}

printf("\n");
printf("%d", sum);
}