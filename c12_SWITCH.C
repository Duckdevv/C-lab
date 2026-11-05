#include <stdio.h>

int a ;

int main(){
    printf("please enter your family status : (1:singele, 2:married, 3:widowed, 4:divorced)");
    scanf("%d",&a);
    switch (a)
    {
        case 1 :
        printf("single");
        break;
        case 2 :
        printf("married");
        break;
        case 3 :
        printf("widowed");
        break;
        case 4 :
        printf("divorced");
        break;
        default :
        printf("incorect input");
        break;
    }
    return 0 ;
}