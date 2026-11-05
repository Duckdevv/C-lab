#include <stdio.h>

float a,b ;

int main(){
    printf("enter a b :");
    scanf("%f%f",&a,&b);
    a = a+b ;
    b = a-b ;
    a = a-b ;
    printf("a = %f",a);
    printf("b = %f",b);
    return 0 ;
}