#include <stdio.h>
int main(){
    int rows ;
    printf("Enter the rows : ");
    scanf("%d",&rows);
    int column ;
    printf("Enetr the colums : ");
    scanf("%d",&column);
    int sum = 0;
    int arr[rows][column];
    printf("Enter the elemnts : ");
    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&arr[i][j]);
            sum = sum + arr[i][j];
        }
    }
    printf("the sum of matrix is : %d",sum);
    return 0;
}