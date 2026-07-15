/*1. Design application for hotel. According to the management team of hotel they are giving 
discount on total bill amount of customer.  
If bill bill amount is less than 500 then there is no discount , if bill amount is less than 1500 
and more than 500 they give 10% discount.  
And if the bill amount is more than 1500 then they give 15% discount.  
Our application should accept total bill amount and depends on the discount policy we have 
to return the amount after applying discount. 
Input : 1200	Output : 1080
Input : 290	Output : 290 
Input : 3700	Output : 3145*/


#include<stdio.h>

float CalculateBill(int iAmount)
{
	if(iAmount > 1500)
	{
	    float iAmount1 = (iAmount/100) * 15 ;
	    float iDiscountAmount1 = iAmount - iAmount1 ;
		printf("You got 15 percent Discount : %f", iAmount1);
// 		printf("\n%f", iAmount1);
		printf("\nPlease pay the below Amount!");
		printf("\n%f",iDiscountAmount1);
		
	}
	else if(iAmount < 1500 && iAmount > 500)
	{
	    float iAmount2 = (iAmount/100) * 10 ;
	    float iDiscountAmount2 = iAmount - iAmount2 ;
		printf("You got 10 percent Discount : %f",iAmount2);
// 		printf("\n%f", iAmount2);
        printf("\nPlease pay the below Amount!");
        printf("\n%f",iDiscountAmount2);
	}
	else if(iAmount < 500)
	{	
		printf("No discount");
		printf("Please pay the below Amount! \n%d", iAmount);
	}
	
	printf("\nThank you.. Visit again!!");
}


int main()
{
	int iValue = 0;

	printf("Enter the amount of bill : ");
	scanf("%d",&iValue);
	
	float iBill = CalculateBill(iValue);

	return 0;
}


// #include<stdio.h>
// #include<math.h>

// int main()
// {
//     int a = 0;
//     int totalamount = 1500;
    
//     printf("Enter the amount : ");
//     scanf("%d",&a);
    
//     int result = (a / 100)*50;
//     printf("%d",result);
// }