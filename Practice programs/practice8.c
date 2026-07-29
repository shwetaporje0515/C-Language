#include<stdio.h>

int CountNo(int iNo)
{   
    int i = 0;
	for(i = 1; i <= iNo; i++)
	{
		printf("%d\n",i);
	}
}

int main()
{
	int iValue = 0;

	printf("Enter the value : ");
	scanf("%d",&iValue);

	CountNo(iValue);

	return 0;
}