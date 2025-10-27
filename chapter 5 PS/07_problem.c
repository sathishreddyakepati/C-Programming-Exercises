//  Write a program using function to print the following pattern (first n lines) 
// * 
// * * * 
// * * * * * 

// for n = 0, print 1 *
// for n = 1, print 3 *
// for n = 2, print 5 *
//for n = n , print 2n+1 *

#include <stdio.h>

int main(){
    int n = 3;

    for(int i=0;i<n;i++){



        for(int j =0;j<2*i+1;j++){
            printf("*");
        }

             printf("\n");

    }
    
    return 0;
}