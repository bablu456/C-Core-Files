#include <stdio.h>
int main(){
    int r ;
    printf("Enter the rows : ");
    scanf("%d",&r);
    int c ;
    printf("Enetr the columns : ");
    scanf("%d",&c);
    int arr[r][c];
    int highest_sum = 0;
    printf("Enter the number in array :");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int row = 0;
    for(int i=0;i<r;i++){
        int sum = 0;
        for(int j=0;j<c;j++){
            sum = arr[i][j] + sum ;
            if(sum>highest_sum){
                row = i;
                highest_sum = sum;
            }

        }
    }
    printf("the hoghest num in row %d is %d",row,highest_sum);
    return 0;
}