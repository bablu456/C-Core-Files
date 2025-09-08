#include <stdio.h>
int main()
{
    int row;
    printf("Enter the rows : ");
    scanf("%d", &row);
    int column;
    printf("Enter the column : ");
    scanf("%d", &column);
    int arr[row][column];
    int sum = 0;
    int sum2 = 0;
    int store = 0;
    printf("Enetr the all elemets in the array : ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            sum = sum + arr[i++][j];
        }
        i = row-1;
        for(int k=0;k<column;k++){
            sum2 = sum2 + arr[i-k][k];
        }
        store = i;
    }
    printf("%d\n", sum);
    printf("%d\n", sum2);
    printf("%d", store);
    return 0;
}