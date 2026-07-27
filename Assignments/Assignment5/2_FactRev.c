#include<stdio.h>

int FactRev(int iNo)
{
    if(iNo == 0){
        return 0;
    }

    if(iNo < 0){
       iNo = -iNo;
    }
 
    for(int i = iNo-1; i >= 1; i--)
    {
        if(iNo % i == 0)
        {
            printf("%d\t",i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);
    
    FactRev(iValue);

    return 0;
}
