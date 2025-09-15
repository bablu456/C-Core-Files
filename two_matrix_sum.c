#include <stdio.h>
int main(){
    int row;
    printf("Enter the row size : ");
    scanf("%d",&row);
    int column ;
    printf("Enter the column size : ");
    scanf("%d",&column);
    int arr[row][column];
    int brr[row][column];
    int sum[row][column];
    printf("enter the elements in the array : ");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter the elemnts in the second array : ");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&brr[i][j]);
            sum[i][j] = arr[i][j] + brr[i][j];
        }
    }
    printf("the sum of two array is : - \n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}