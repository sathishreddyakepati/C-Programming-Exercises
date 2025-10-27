#include <stdio.h>

int main(){
    int a=3,b=1,c=16,d=9;
   
    if(a>b && a>c && a>d)
        printf("%d is the greatest of the four numbers\n", a);

    else if(b>a && b>c && b>d)
        printf("%d is the greatest of the four numbers\n", b);

    else if(c>a && c>b && c>d)
        printf("%d is the greatest of the four numbers\n", c);

    else if(d>a && d>c && d>b)
        printf("%d is the greatest of the four numbers\n", d);
    
    return 0;
}