#include <stdio.h>

int main(){
    int arr[6]={1,2,-2,-5,9,10};
    int j=0,i;
    for(i=0;i<6;i++){
        if(arr[i]>0){
            j = j +1;
        }
    }
    printf("The number of postive elements in array is %d",j);
    return 0;
}