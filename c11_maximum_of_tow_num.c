#include <stdio.h>
float a,b;

int main(){
    printf("please enter a b : ");
    scanf("%f%f",&a,&b) ;
    if (a>b){
        printf("a is geater than b");
    }
    else if (a<b){
        printf("b is greater than a");
    }
    else {
        printf("a and b are motassawian");
    }
    return 0 ;
}
