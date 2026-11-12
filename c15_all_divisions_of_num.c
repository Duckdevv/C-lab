#include <stdio.h>

int a,n ;

int main()
{
    printf("please enter a : ");
    scanf("%d",&a);
    for ( int i = 1 ; i < a+1 ; i++)
    {
        n = a % i ;
        if (n == 0)
        {
            printf("%d is a divition\n",i);
        }
        
    }
    
    return 0;
}
