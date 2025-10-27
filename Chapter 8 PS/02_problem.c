/*Write a program to take string as an input from the user using %c and %s confirm 
that the strings are equal.*/

#include <stdio.h>
#include <string.h>
int main(){
    char str[6];
    //scanf("%s", str);
    //printf("%s",str);
    //printf("\n");
    char strr[6];

    for(int i =0;i<5;i++){

        //printf("Enter: \n");
        scanf("%c", &strr[i]);
        fflush(stdin);

        
    }
    strr[5]='\0';
    printf("%s",strr);
    ;
return 0;
}