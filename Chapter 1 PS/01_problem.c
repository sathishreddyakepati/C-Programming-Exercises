#include <stdio.h>

int main(){
    //int length =7;
    //int width = 4;
    int length, width;
    printf("Enter length\n");
    scanf("%d", &length);
    printf("Enter the width\n");
    scanf("%d", &width);

    printf("The area of the rectangle is %d", length*width);
    return 0;
}