#include <stdio.h>

int main(){
    char ch = 'A';
    printf("The character is %c\n",ch);
    printf("The value of the character is %d\n",ch);
    if(ch>=97 && ch<=122)
    printf("The character is lowercase\n");
    else
    printf("The character is not lowercase\n");

    return 0;
}