//Write a program containing a function which reverses the array passed to it. 

#include <stdio.h>

void printArray(int a[], int n){
    for(int i = 0;i < n; i++){
        printf("%d ", a[i]);

    }
    printf("\n");
}
void reverse(int b[], int n){
    int temp;
    for(int i = 0;i<n/2;i++){
        temp = b[i];
        b[i] = b[n-i-1];
        b[n-i-1] = temp;
    }
} 

int main(){
    int arr[]  = {1,3,5,7,9,11};
    printArray(arr, 6);
    reverse(arr, 6);
    printArray(arr, 6);
    
    return 0;
}