/* 3. Design application for school management system.  
As school is primary there are 4 standards from 1 to 4.  
School fees of each standard is different.  
For first standard fees are 8900, for second standard 12790, for third standard 21000 and 
for fourth standard fees are 23450.  
We have to accept standard from user and display the corresponding fees.

Input : 2   Output : 12790 
Input : 4   Output : 23450 
Input : 6   Output : Wrong input 



#include<stdio.h>

int SchoolFees(int iStandard)
{
    int Class1 = 8900;
    int Class2 = 12790;
    int Class3 = 21000;
    int Class4 = 23450;
    
    if(iStandard == 1)
    {
        printf("Your class fee is : %d", Class1);
    }
    else if(iStandard == 2)
    {
        printf("Your class fee is : %d", Class2);
    }
    else if(iStandard == 3)
    {
        printf("Your class fee is : %d", Class3);
    }
    else if(iStandard == 4)
    {
        printf("Your class fee is : %d", Class4);
    }
    else
    {
        printf("Wrong Input");
    }
}

int main()
{
    int iValue ;
    
    printf("Enter your class : ");
    scanf("%d",&iValue);
    
    SchoolFees(iValue);
    
    return 0;
    
}