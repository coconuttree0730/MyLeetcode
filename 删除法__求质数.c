#include<stdio.h>
#include<stdlib.h>
#define N 1001

static void Arr_zhishu(int *arr );

int main(void)
{
    int n[N]={0};
    Arr_zhishu(n);
    exit(0);
}

static void Arr_zhishu(int * arr )
{
    int count=0;

    for (int  i = 2; i < N; i++)
    {   
        if(arr[i]==0)
        {
          for (int j = i*2; j< N; j+=i)
            {
                arr[j]=-1;
            }
        }
        
    }

    for (int i = 2; i < N; i++)
    {
        if(arr[i]==0){
            printf("%d  ",i);
            count++;
        }
      
    }
    
    

    return ;
}