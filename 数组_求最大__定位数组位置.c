#include <stdio.h>
#include <stdlib.h>
#define N 2
#define M 3
int main(void)
{
    int max = 0;
    int colum, row;
    int arr[N][M] = {1, 3, 54, 6, 78, 96};
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("----------------\n");

    max = arr[0][0];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                row = i;
                colum = j;
            }
        }
    }

    printf("该数组最大的是：%d\n", max);
    printf("定位：%d行，%d列\n", row, colum);

    exit(0);
}