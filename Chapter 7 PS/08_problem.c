/* Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7 
and 9 respectively.*/
#include <stdio.h>

int main(){
    int arr[3][10];
    int mul[3]={};
    printf("Enter the tables you want..\n");
    for(int k=0;k<3;k++){
        printf("Enter the req. table %d :",k+1);
        scanf("%d", &mul[k]);
    }
    for(int i = 0;i<3;i++){
        for(int j =0;j<10;j++){
            arr[i][j]=mul[i] * (j+1);
        }
    
    }
    for(int i = 0;i<3;i++){
        for(int j =0;j<10;j++){
            printf("The value at arr[%d][%d] is %d\n",i,j,arr[i][j]);
            
        }
        printf(" \n");
    }
    return 0;
}