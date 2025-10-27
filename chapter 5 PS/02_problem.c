#include <stdio.h>

float c2f(float c);
float c2f(float c){
    
    return (c * 9.0 / 5) + 32;
}

int main(){
    float c = 100;
    printf("The temperature in Fahrenhiet is %.2f",c2f(c));
    return 0;
}