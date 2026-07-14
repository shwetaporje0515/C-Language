#include<stdio.h>

int fun1(int var1, int var2)
{
    int sum = var1 + var2;
    return sum;
}

int fun2(int sum,int var3)
{
    int sum1 = sum + var3;
    return sum1;
}

int fun3(int sum1, int var4)
{
    int sum2 = sum1 + var4;
    return sum2;
}

int main()
{
    int var1 = 10;
    int var2 = 20;
    
    int a = fun1(var1,var2);
    printf("%d",a);
    
    int b = fun2(a,10);
    printf("\n%d",b);
    
    int c = fun3(b,10);
    printf("\n%d",c);
}