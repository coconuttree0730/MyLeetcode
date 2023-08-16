#include<stdio.h>
#include<stdlib.h>

#define N 10

static void xuanze_sort(int *arr);
int main(void)
{
    int arr[]={322,45,7,45,79,3,56,34,678,23};
    printf("排序前：");
    for (int i = 0; i < N; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("排序后：");
    xuanze_sort(arr);
    exit(0);
}

static void xuanze_sort(int *arr)
{
    int tmp;
    for (int i = 0; i < N; i++)
    {
        int k=i;//对应的下标是已经排好序的下一个
        for (int j = i+1; j <  N; j++)
        {
            if(arr[k]>arr[j]){
                k=j;//记录当前最小的
            }
        }
        if(i!=k){
            tmp=arr[i];
            arr[i]=arr[k];
            arr[k]=tmp;
        }
    }

    
    for (int i = 0; i <  N; i++)
    {
            printf("%d ",arr[i]);
    }
    printf("\n");
    
    return ;
}