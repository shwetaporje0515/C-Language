// 3. Accept on number from user if number is less than 10 then print “Hello” otherwise print //“Demo”.  


#include<stdio.h>

int Display(int iNo)
{
	if(iNo < 10)
	{
		printf("Hwllo");	
	}
	else
	{
		printf("Demo");
	}
} 


int main()
{
	int iValue = 0;

	printf("Enter the value : ");
	scanf("%d",&iValue);

	Display(iValue);
	
	return 0;
}