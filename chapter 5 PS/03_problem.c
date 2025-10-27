#include <stdio.h>

float force(float m);
float force(float m){

    return m*9.8;
}


int main(){
    float m = 3;
    printf("The force of attraction bw earth and mass %.2f kg is %.2f N\n",m,force(m));
    
    return 0;
}