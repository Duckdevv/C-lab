#include <stdio.h>
#include <math.h>

float weight,height ;

int main(){
    printf("please enter your weight (kg): ");
    scanf("%f",&weight);
    printf("please enter your height (m): ");
    scanf("%f",&height);
    printf("your BMI is : %f",weight/pow(height,2));
    return 0 ;
}
