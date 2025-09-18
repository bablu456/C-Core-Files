#include <stdio.h>
int main()
{
    int rows;
    printf("Enter the rows first : ");
    scanf("%d", &rows);
    int column;
    printf("Enetr the column first : ");
    scanf("%d", &column);
    int arr[rows][column];
    int brr[rows * column];
    int k = 0;
    printf("Enter the elments in the 2d array : ");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &arr[i][j]);
            brr[k++] = arr[i][j];
        }
    }
    int store = 0;
    int count = 0;
    int rep = 0;
    for (int i = 0; i < rows * column; i++)
    {
        for (int j = i + 1; j < rows * column; j++)
        {
            if (brr[i] == brr[j])
            {
                count++;
                // printf("The repeatative number i found %d",brr[i]);
                store = brr[i];
                break;
            }
        }
        if (count == 1)
        {
            break;
        }
    }
    for (int i = 0; i < rows * column; i++)
    {
        if (store == brr[i])
        {
            rep++;
        }
    }
    printf("the number is %d repated %d times ", store, rep);

    return 0;
}