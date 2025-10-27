#include <stdio.h>

int main(){
    int nums[10] ={1,2,3,4,5,6,7,8,9,10};
    int *ptr = &nums[0];
    int i;
    for(i = 0;i<10;i++){
        printf("The address of num at index %d is %d and num is %d\n",i,ptr,nums[i]);
        ptr = ptr + 2;
    }
    
    return 0;
}