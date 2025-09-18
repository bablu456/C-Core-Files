#include <stdio.h>
int main(){
    int r ;
    printf("Enter the rows size : ");
    scanf("%d",&r);
    int c ;
    printf("Enter the column size : ");
    scanf("%d",&c);
    int arr[r][c];
    int max = 0;
    printf("enter the elements in the array  : ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(max<arr[i][j]){
                max = arr[i][j];
            }
        }
    }
    printf("the maximum elemnts in the array is %d ",max);
    return 0;
}