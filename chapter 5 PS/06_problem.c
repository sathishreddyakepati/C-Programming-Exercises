#include <stdio.h>
// Write a recursive function to calculate the sum of first ‘n’ natural numbers.

int sum_natural(int);
int sum_natural(int n){
    //sum(n) = 1 + 2 + 3 + 4 +......+ n-1 + n
    // sum(n) = sum(n-1)+n
    if(n==1){
        return 1;
    }
    return sum_natural(n-1)+n;
}
int main(){
    int n = 1000;
    printf("The sum upto %d natural numbers is %d",n,sum_natural(n));
    
    return 0;
}