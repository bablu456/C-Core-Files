#include <stdio.h>
int main()
{
    int rows;
    printf("Enetr the rows : ");
    scanf("%d", &rows);
    int column;
    printf("Enetr the column : ");
    scanf("%d", &column);
    int arr[rows][column];
    int arr1[rows][column];
    int flag = 1;
    printf("Enter the elements in the 1st array  : ");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enetr the elments in the second array : ");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (arr[i][j] != arr1[i][j])
            {
                printf("%d != %d\n",arr[i][j],arr1[i][j]);
                flag = 0;
                // printf("%d\n",flag);
                break;
            }
        }
    }
    if (flag == 1)
    {
        printf("Both matrix is equal ! ");
    }
    else
    {
        printf("Both matrix isn't equal ! ");
    }

    return 0;
}