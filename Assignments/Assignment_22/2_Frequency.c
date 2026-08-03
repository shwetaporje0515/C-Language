/*
2. Accept N numbers from user and return difference between frequency of even number and odd numbers. 
Input :  N :   7 
Elements : 85 66 3 80 93 88 90 
Output : 1 (4 -3) 
*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int arr[], int iLength)
{
    int iCountEven = 0;
    int iCountOdd = 0;
    int iDiff = 0;
    for(int i = 0; i<iLength; i++)
    {
        if(arr[i] < 0)
        {
            arr[i] = -arr[i];
        }
        
        if(arr[i] % 2 == 0)
        {
            iCountEven++;
        }
        else
        {
            iCountOdd++;
        }
    }
    printf("\nEven no count : %d",iCountEven);
    printf("\nOdd no count : %d",iCountOdd);
    iDiff = iCountEven - iCountOdd;
    return iDiff;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;
    
    printf("Enter number of elements : ");
    scanf("%d",&iSize);
    
    p = (int *)malloc(iSize * sizeof(int));
    
    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    
    printf("Enter %d elemets : \n", iSize);
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    
    iRet = Frequency(p,iSize);
    printf("\nResult is  : %d",iRet);
    
    free(p);
    
    return 0;
    
}