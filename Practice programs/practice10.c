#include<stdio.h>

int main()
{
    int iNo;
    int count = 0;
    printf("Enter the number : ");
    scanf("%d",&iNo);
    
    while(iNo != 0)
    {
        int digit = iNo % 10;
        if(digit == 0)
        {
            count++;
        }
        
        iNo=iNo/10;
    }
    printf("%d",count);
    
    return 0;
}