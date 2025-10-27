#include <stdio.h>

int main(){
    int n;
    int i = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 10; i >0; i--)

    {
    int t = n*i;
       
        printf("%d x %d = %d\n" ,n,i,t);
    }
    
    return 0;
}