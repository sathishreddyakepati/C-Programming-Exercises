#include <stdio.h>

int main(){
    int product = 1;
    int n = 8;
    for(int i =1;i<=n;i++){
        product = product*i;
       

    }
    printf("the factorial of 8 is %d",product);
    return 0;
}