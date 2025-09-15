#include <stdio.h>
int main(){
    int row;
    printf("Enter the row size : ");
    scanf("%d",&row);
    int column ;
    printf("Enter the column : ");
    scanf("%d",&column);
    int arr[row][column];
    printf("Enter the elemnts in the array : ");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}