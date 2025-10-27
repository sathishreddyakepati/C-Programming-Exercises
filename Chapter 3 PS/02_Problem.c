/*
 Write a program to determine whether a student has passed or failed. To pass, a 
student requires a total of 40% and at least 33% in each subject. Assume there 
are three subjects and take the marks as input from the user. 

*/

#include <stdio.h>

int main(){
    int m ,p,c ;
    printf("Enter maths marks:\n");
    scanf("%d", &m);

    printf("Enter physics marks:\n");
    scanf("%d", &p);

    printf("Enter chemistry marks:\n");
    scanf("%d", &c);

    printf("The marks are %d,%d and %d\n",m,p,c);

    if( m<33 || p<33 || c<33)
    printf("You are failed due to not maintaining 33 percentage in the subject(s)\n");

    else if( m + p +c/3 < 40)
    printf("You are failed due to not maintaining overall percentage of 40\n");

    else
    printf("Congrats,You have passed!\n");






    return 0;
}