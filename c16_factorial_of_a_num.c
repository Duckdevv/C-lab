#include <stdio.h>

int a ;

int main()
{
    printf("please enter a : ");
    scanf("%d",&a);
    for ( int i = a-1 ; i >= 1 ; i--)
    {
        a = a * i ;
    }
    printf("the factorial is %d ",a);
    
    return 0;
}
