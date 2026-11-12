#include <stdio.h>

int a,b,c ;

int main()
{
    printf("please enter a & b : ");
    scanf("%d%d",&a,&b);
    while (b != 0)
    {
        c = a/b ;
        a=b;
        b=c;
    }
    printf("pgcd(a,b) = %d",a);
    
    return 0;
}