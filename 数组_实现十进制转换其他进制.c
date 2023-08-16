#include<stdio.h>
#include<stdlib.h>
#define M 100
static void zhuanhuan(int num_D,int num);
int main(void)
{

    int num_D;
    int num;
    printf("请输入十进制：");
    scanf("%d",&num_D);
    printf("请输入待转换进制：");
    scanf("%d",&num);
    zhuanhuan(num_D,num);

    exit(0);
}


static void zhuanhuan(int num_D,int num)
{
    int n[M];
    int i=0;
    do{
        n[i]=num_D%num;
        num_D=num_D/num;
        i++;
    }while (num_D!=0);
    for (i--; i>=0; i--)
    {
        if(n[i]>=10){
            printf("%c",n[i]-10+'A');
        }
        else printf("%d",n[i]);
    }
    
    printf("\n");
    return ;
}