#include <stdio.h>
int main(){
    int r ;
    printf("Enter the row size :");
    scanf("%d",&r);
    int c ;
    printf("Enter the c size : ");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter the elments in the array : ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        int max_row = 0;
        for(int j=0;j<c;j++){
            if(max_row<arr[i][j]){
              max_row =arr[i][j];
            }
        }
        printf("the max elemnts is %d in this row %d \n",max_row,i+1);
    }
    return 0;
}