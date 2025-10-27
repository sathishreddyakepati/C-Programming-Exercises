//Write a program to create an array of 10 integers and store multiplication table of 
//5 in it. 
#include <stdio.h>

int main(){
    int table[10];
    int i;
    int n;
    int t;
    printf("Enter the number: ");
    scanf("%d", &t);
    for(i = 0;i <10;i++){
        table[i] = t*(i+1);
        n = i + 1;
        printf("%d x %d = %d\n",t,n,table[i]);
        
    }
    
    return 0;
}