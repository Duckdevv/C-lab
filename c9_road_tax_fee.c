#include <stdio.h>
int a ;

int main(){
    printf("please enter vehicle horsepower : ");
    scanf("%d",&a) ;
    if (a>=1){
        if (a <= 3){
            printf("500 DZD");
        }
        else if (a>3){
            if (a<=6){
                printf("1500 DZD");
            }
            else if (a>6){
                if (a <= 9){
                    printf("2500 DZD");
                }
                else{
                    printf("3500 DZD");
                }
                
            }
            
        }
        
    }
    return 0 ;
}
