#include <stdio.h>
#include <stdlib.h>

#define Max 10

static void sort(int *arr);

int main(void)
{
    int arr[Max] = {2,3,66,34,21,46,2,56,2,76};
    printf("排序前：");
    for (int i = 0; i < Max-1; i++)
    {
        /* code */
        printf("%d ",arr[i]);
    }
    printf("\n");
    sort(arr);
    exit(0);
}

static void sort(int *arr)
{
    int tmp = 0;

    for (int i = 0; i < Max - 1; i++)
    {
        for (int j = 0; j < Max - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    printf("排序后：");
    for (int i = 0; i < Max-1; i++)
    {
        /* code */
        printf("%d ",arr[i]);
    }
    printf("\n");

    return;
}

