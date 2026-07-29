#include<stdio.h>

int main()
{
    int iNo;
    
    printf("Enter the number : ");
    scanf("%d",&iNo);
    
    while(iNo != 0)
    {
        int digit = iNo % 10;
        printf("%d",digit);
        iNo=iNo/10;
    }
    printf("\n");
    
    return 0;
}