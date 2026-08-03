/*
5. Accept N numbers from user and accept one another number as NO , return frequency of NO form it. 
Input :  N :   6
NO:  66 
Elements : 85 66 3 66 93 88  
Output : 2 

Input :  N :   6
NO: 12 
Elements : 85 11 3 15 11 111  
Output : 0
*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int arr[], int iLength, int iNO)
{
    int iCount = 0;
    for(int i = 0; i<iLength; i++)
    {
        if(arr[i] < 0)
        {
            arr[i] = -arr[i];
        }
        
        if(arr[i] == iNO)
        {
            iCount++;
        }
    }
    
    return iCount;
    
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int iValue;
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
    
    iRet = Frequency(p,iSize, iValue);
    
    printf("The total frequency is : %d", iRet);

    free(p);
    
    return 0;
    
}