/*
4. We have to design application for tourist company.  
Tourist company provides cars on rent.  
Depends on the running of car they apply rent.  
If running is less than 100 kilometres then they charge 25 rupees per kilometre .  
And if running is more than 100 kilometres then they apply 15 rupees per kilometre after 
100 kilometres.  
We have to accept number of kilometres from user and return the estimated rent. 
Input : 73	Output : 1825    
Input : 132   	Output : 2980 
Input : 189   	Output : 3835 
*/


#include<stdio.h>

int TouristBill(int iKilometers)
{
    int iCharge1 = 0;
    int iSum1 = 0;
    int iSum2 = 0;
    if(iKilometers < 100)
    {
        iCharge1 = iKilometers * 25;
        printf("%d",iCharge1);
    }
    else if(iKilometers > 100)
    {   
        iSum1 = 100 * 25;
        int iKilometers2 = iKilometers - 100;
        iSum2 = iKilometers2 * 15;
        
        int iCharge2 = iSum1 + iSum2;
        printf("%d",iCharge2);
        }
}

int main()
{
    int iValue = 0;
    
    printf("Enter the kilometers you travelled : ");
    scanf("%d",&iValue);
    
    TouristBill(iValue);
    
    return 0;
}



