#include <stdio.h>
int main(){
    int a ;
    printf("Enter the rows : ");
    scanf("%d",&a);
    int b ;
    printf("Enter the column : ");
    scanf("%d",&b);
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<a;i++){
        int sum =0;
        for(int j=0;j<b;j++){
            sum = sum + arr[i][j];
        }
        printf("the sum of rows is  %d\n",sum);
    }
    return 0;
}