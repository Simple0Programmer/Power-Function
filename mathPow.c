#include <stdio.h>

double my_pow(double, double);

int main(){
    double value = 0;
    double exp = 0;
    while(1){
        printf("Enter number: ");
        scanf("%lf", &value);
        printf("Enter exp: ");
        scanf("%lf", &exp);
        if(value == 0 && exp == 0){
            break;
        }
        printf("Result: %f\n", my_pow(value, exp));
    }
    return 0;
}

double my_pow(double base, double exp){
    double result = 1;
    //lets check for negative exp.
    int i = 0;
    if(exp < 0){
        for(i = exp; i != 0;i ++){
            result *= (1/base);
        }
    }
    else{
        for(i = 0;i < exp; i++){
            result *= base;
        }
    }
    return result;
}