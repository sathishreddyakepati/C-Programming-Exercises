#include <stdio.h>
int returning_5(int*);
int returning_5(int* j){
    printf("The value of j is %d\n", j);
    printf("The value at j is %d\n", *j);
    return 5;
}



int main(){
    int i = 7;
    int *j = &i;
    printf("The address of i is %d\n",j);
    printf("The value of i is %d\n",*j);
    returning_5(j);

    return 0;
}