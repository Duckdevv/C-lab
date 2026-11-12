#include <stdio.h>

int a,b,c ;

int main()
{
    c = 0 ;
    printf("plwase enter a and b :");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        while (a>b)
        {
            c = c + b ;
            b = b + 1 ;
            printf("%d\n",c);
        }
        
    }
    else if (a<b)
    {
        while (a<b)
        {
            c = c + a ;
            a = a + 1 ;
            printf("%d\n",c);
        }
        
    }
    printf("final value is : %d",c);

    return 0 ;
}