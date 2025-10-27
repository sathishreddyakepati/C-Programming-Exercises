/*
Calculate income tax paid by an employee to the government as per the slabs 
mentioned below: 
Income Slab                       
2.5 – 5.0L                               
5.0L - 10.0L                          
Above 10.0L                         
Tax  
5% 
20% 
30% 
Note that there is no tax below 2.5L. Take income amount as an input from the user.



*/

#include <stdio.h>

int main(){
    int income, tax=0;

    printf("Enter your Income in rupees:\n");
    scanf("%d", &income);
    if( income < 250000){
        tax = 0;
    
    }
    

    else if( 250000<=income<500000){
        
    tax = 0.05*(income - 250000);
    }

    else if( 500000<=income<=1000000)
    tax = 0.2*(income - 500000);


    else if( income>1000000 )
    tax = 0.3*(income - 1000000);

    printf("The total tax you need to pay is %d",tax);

    return 0;
}