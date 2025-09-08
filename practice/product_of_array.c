#include <stdio.h>
int main(){
    int rows ;
    printf("Enter the rows : ");
    scanf("%d",&rows);
    int column ;
    printf("Enter the column : ");
    scanf("%d",&column);
    int arr[rows][column];
    printf("Enter the elemnts : ");
    int produsct = 1;
    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&arr[i][j]);
            produsct = produsct * arr[i][j];
        }
    }
    printf("%d",produsct);
    return 0;
}