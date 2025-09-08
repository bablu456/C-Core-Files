#include <stdio.h>
int main(){
    int a ;
    printf("Enter the rows : ");
    scanf("%d",&a);
    int b ;
    printf("Enter the column : ");
    scanf("%d",&b);
    int arr[a][b];
    printf("Enter the elemnts : ");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum = 0;
    int l1 ;
    printf("Enter the starting point of rows : ");
    scanf("%d",&l1);
    int l2 ;
    printf("Enter the ending point of rows : ");
    scanf("%d",&l2);
    int r1 ;
    printf("enter the starting point of column : ");
    scanf("%d",&r1);
    int r2;
    printf("Enter the ending point of column : ");
    scanf("%d",&r2);
    for(int i=l1;i<=l2;i++){
        for(int j=r1;j<=r2;j++){
            sum = arr[i][j] + sum;
        }
    }
    printf("%d ",sum);
    return 0;
}