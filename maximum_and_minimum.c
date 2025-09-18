#include <stdio.h>
int main(){
    int rows ;
    printf("Enter the number  : ");
    scanf("%d",&rows);
    int column ;
    printf("Enter the column : ");
    scanf("%d",&column);
    int arr[rows][column];
    printf("Enetr the elemnts in the array : ");
    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int maximum = 0;
    int minimum = arr[0][0];
    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            if(maximum<arr[i][j]){
                maximum = arr[i][j];
            }
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            if(minimum>arr[i][j]){
                minimum = arr[i][j];
            }
        }
    }
    printf("the maximum elemnts in this array is %d ",maximum);
    printf("\nthe minimum elemnts in this array is %d ",minimum);
    return 0;
}