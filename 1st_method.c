#include <stdio.h>
int main()
{
    int a;
    printf("Enter the roes : ");
    scanf("%d", &a);
    int b;
    printf("Enter the column : ");
    scanf("%d", &b);
    int arr[a][b];
    printf("Enter the number in the elemnts : ");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int z = 0;
    int count = 0;
    int store = 0;
    int rep = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            int z = j+1;
            for (int k = j + 1; k < b; k++)
            {

                if (arr[i][j] == arr[j][z++])
                {
                    count++;
                    store = arr[i][j];
                    break;
                }
            }
            if (count == 1)
            {
                break;
            }
        }
    }

        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                if (store == arr[i][j])
                {
                    rep++;
                }
            }
        }
        if (count == 1)
        {
            printf("The number is %d is repeat time %d", store, rep);
        }
        else
        {
            printf("no number found");
        }

        return 0;
}