#include<stdio.h>
#include<stdlib.h>

#define N 3
void find_Num(int p[][N],int n);
float  averaging_Array(int *q ,int n);
void print_list(int *por,int n);

int main(void)
{
    int arr[][N]={  1,2,3,
                    4,5,6,
                    7,8,9
                };
    printf("二维数组显示如下：\n");
    print_list(*arr,sizeof(arr)/sizeof(arr[0][0]));
    printf("\n");
    printf("数组平均值：");
    float ave=averaging_Array(*arr,sizeof(arr)/sizeof(arr[0][0]));
    printf("%.2f\n",ave);
    printf("选择哪一行的数组元素？请输入列数：");
    int num;
    scanf("%d",&num);
    find_Num(arr,num-1);
    exit(0);
}



float  averaging_Array(int *q ,int n)
{  
    float sum=0;
    for (int i = 0; i <n; i++)
    {
         sum+=*(q+i);
    }
    //printf("%f",sum);
    return sum/n;
}

void print_list(int *por,int n)
{
    int count=0;
    for (int i = 0; i < n; i++)
    {
        printf("%d  ",*(por+i));
        count++;
        if(count%3==0){printf("\n");}
    }
    
}

void find_Num(int p[][N],int n)
{
    for (int  i = 0; i < N; i++)
    {
        printf("%d ",*(*(p+n)+i));
    }
    printf("\n");
    return ;
}