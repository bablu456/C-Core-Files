#include <stdio.h>
int main()
{
    int row, column, i, j, k;
    printf("Enter the rwos size : ");
    scanf("%d", &row);
    printf("Enter the column : ");
    scanf("%d", &column);
    int arr[row][column];
    int min_row = 0, min_col = 0, max_row = row - 1, max_col = column - 1;
    int total = row * column;
    int count = 0;
    printf("enter the elemnts in the array : ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The spiral order of the array is : \n");
    while(count<total){
        for(i=0;i<row;i++){
            for(j=0;j<column;j++){
                printf("%d ",arr[i][j]);
                count++;
            }
        }
        for(i=max_row;max_row==row-1;){
            for(int m=0;m<row;m++){
                printf("%d ",arr[m][i]);
                count++;
                i++;
            }
        }
        if(count<total){
            break;
        }
    }
    return 0;
}