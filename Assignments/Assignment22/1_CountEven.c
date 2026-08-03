/*
1. Accept N numbers from user and return frequency of even numbers. 
Input :  N :   6 
Elements : 85 66 3 80 93 88  
Output : 3 
*/

#include<stdio.h>
#include<stdlib.h>

int CountEven(int arr[], int iLength)
{
    int iCount = 0;
    for(int i = 0; i<iLength; i++)
    {
        if(arr[i] < 0)
        {
            arr[i] = -arr[i];
        }
        
        if(arr[i] % 2 == 0)
        {
                iCount++;
        }
    }
    return iCount;
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
    
    iRet = CountEven(p,iSize);
    printf("\nResult is  : %d",iRet);
    
    free(p);
    
    return 0;
    
}