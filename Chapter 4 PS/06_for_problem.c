/*#include <stdio.h>
 While loop
int main(){
    int i = 1;
    int sum = 0;
    while(i<=10){
    sum = sum + i;
        i = i + 1;
    
       
    }
    printf("The sum of first ten natural numbers is %d", sum);
    return 0;
}
    */

    #include <stdio.h>
    
    int main(){
        int i=1;
        int sum = 0;
        do
        {
          sum = sum + i;
          i = i+1;
        } while (i<=10);
        printf("The sum is %d",sum);
        return 0;
    }

