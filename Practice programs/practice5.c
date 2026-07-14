#include<stdio.h>
#define True 1
#define False 0
typedef int BOOL;

BOOL isEven(int num)
{
    if(num %2 == 0)
        return True;
    else
        return False;
}

int main()
{
    if (isEven(3086))
        printf("Even NUmber..!");
    else
        printf("Odd Number..!");
}