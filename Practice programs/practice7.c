#include<stdio.h>

int fun5(int sum3,int var6)
{
    int sum4 = sum3 + var6;
}

int fun4(int sum2, int var5)
{
    int sum3 = sum2 + var5;
}

int fun3(int sum1, int var4)
{
    int sum2 = sum1 + var4;
    printf("\n%d",sum2);
    
    int d = fun4(sum2,10);
    printf("\n%d",d);
    
    int e = fun5(d,10);
    printf("\n%d",e);
}

int fun2(int sum, int var3)
{
    int sum1 = sum + var3;
    printf("\n%d",sum1);
    
    int c = fun3(sum1,10);
    // printf("\n%d",c);
}

int fun1(int var1,int var2)
{
    int sum = var1 + var2;
    printf("%d",sum);
    
    int b = fun2(sum,10);
    // printf("\n%d",b);
}


int main()
{
    int a = fun1(10,20);
    // printf("%d",a);
}