#include<stdio.h>
#include<stdlib.h>
static void move(char ,char );
static void Hanoi(int ,char ,char ,char );
int count=0;
int main(void)
{
    int num=0;
    
    //char t1,t2,t3;
    printf("输入汉诺塔盘子数：");
    scanf("%d",&num);
    Hanoi(num,'A','B','C');
    exit(0);
}

static void Hanoi(int n,char T1,char T2,char T3)
{

    if(n==1){
        move(T1,T3);
    }
    else
        {
                Hanoi(n-1,T1,T3,T2);//t1表示第一个盘子所在的起始所在的柱子，t2表示中转柱子，t3表示最终要去到的位置
                move(T1,T3);
                Hanoi(n-1,T2,T1,T3);
           }
}

static void move(char post1,char post2)
{
    count++;
    printf("%-2d.%5c -> %c\n",count, post1,post2);
}