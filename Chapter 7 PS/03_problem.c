//Write a program to create an array of 10 integers and store multiplication table of 
//5 in it. 
#include <stdio.h>

int main(){
    int table[10];
    int i;
    int n;
    for(i = 0;i <10;i++){
        table[i] = 5*(i+1);
        n = i + 1;
        printf("5 x %d = %d\n",n,table[i]);
        
    }
    
    return 0;
}