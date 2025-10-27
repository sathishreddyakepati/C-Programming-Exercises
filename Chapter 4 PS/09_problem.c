#include <stdio.h>

int main(){
    int product = 1;
    int n = 8;
    int i =1;
    while (i<=n){
    
       product = product*i;
       i = i+1;
    }
        
    printf("the factorial of 8 is %d",product);
    return 0;
}
