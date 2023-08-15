#include<stdio.h>
#include<stdlib.h>

#define M 10

int main(void)
{
   
    int f[M];
    f[0]=f[1]=1;
    for (int i = 2; i < M-1; i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    for (int i = 0; i < M-1; i++)
    {
         printf(":::\t%d\t:::\n",f[i]);
        /* code */
    }
    
   
    exit(0);
}