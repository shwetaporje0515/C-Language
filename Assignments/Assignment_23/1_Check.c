/*
1. Accept N numbers from user and accept one another number as NO , check whether NO is present or not. 
Input :  N : 6  
NO:  66 
Elements : 85 66 3 66 93 88  
Output : TRUE 

Input :  N : 6  
NO:  12 
Elements : 85 11 3 15 11 111  
Output : FALSE 
*/

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int Check(int arr[], int iLength, int iNO)
{

    for(int i = 0; i<iLength; i++)
    {
        if(arr[i] < 0)
        {
            arr[i] = -arr[i];
        }
        
        if(arr[i] == iNO)
        {
            return TRUE;
        }
        
    }
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int iValue;
    BOOL bRet = FALSE;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);
    
    printf("Enter a number : ");
    scanf("%d",&iValue);
    
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
    
    bRet = Check(p,iSize, iValue);
    
    if(bRet == TRUE)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    free(p);
    
    return 0;
    
}