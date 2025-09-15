#include <stdio.h>
int main(){
    int rows ;
    printf("Enter the rows size : ");
    scanf("%d",&rows);
    int column ;
    printf("Enter the column : ");
    scanf("%d",&column);
    int arr[rows][column];
    printf("Enter the elments in the array : ");
    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<rows;i++){
        if(i%2==0){
            for(int j=0;j<column;j++){
                printf("%d ",arr[i][j]);
            }
        }else{
            for(int k=column-1;k>=0;k--){
                printf("%d ",arr[i][k]);
            }
        }
        printf("\n");
    }
    return 0;
}