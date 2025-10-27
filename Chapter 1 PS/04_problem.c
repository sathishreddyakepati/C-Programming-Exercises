#include <stdio.h>

int main(){
    int T,R;
    float P;
    
    printf("The principal amount is\n");
    scanf("%f", &P);
    printf("The time in years is\n");
    scanf("%d", &T);
    printf("The rate of interest in percentage is\n");
    scanf("%d", &R);

    float SI = (P*T*R)/100 ;

    printf("The simple interest is %f", SI);
    return 0;
}