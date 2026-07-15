/*2. Design application for income tax department to calculate tax amount. According to the 
income tax department there is no income tax for the income less than 5 lakhs.  
If income is in between 5 to 10 lakhs then there will be 10% tax.  
If income is in between 10 to 20 lakhs then there will be 20% tax.  
And for more than 20 lakhs there will be 30% tax.  
We have to accept gross income from user and return the tax amount.

Input : 600000		Output : 10000		(0 + 10000) 
Input : 450000		Output : 0   
Input : 1200000		Output : 90000		(0 + 50000 + 40000)    
Input : 8200000		Output : 2110000	(0 + 50000 + 200000 + 1860000)*/




#include<stdio.h>
 
float IncomeTax(int iAmount)
{
	if(iAmount < 500000)
	{
		printf("No income tax!");
	}
	else if(iAmount < 1000000 && iAmount > 500000)
	{	
	    float iAmount1 = (iAmount/100) * 10;
		printf("You have to pay the Income tax of  : ");
		printf("%f",iAmount1);
	}
	else if(iAmount < 2000000 && iAmount > 1000000)
	{  
	    float iAmount2 = (iAmount/100) * 20;
		printf("You have to pay the Income tax of : ");
		printf("%f",iAmount2);

	}
	else if(iAmount > 2000000)
	{
	    float iAmount3 = (iAmount/100) * 30;
		printf("You have to pay the Income tax of : ");
		printf("%f",iAmount3);
	}
}


int main()
{
	int iValue = 0;

	printf("Eneter your Income : ");
	scanf("%d",&iValue);

	IncomeTax(iValue);

	return 0;
	
}
