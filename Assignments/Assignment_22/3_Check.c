/*
3. Accept N numbers from user check whether that numbers contains 11 in it or not. 
Input :  N :   6 
Elements : 85 66 11 80 93 88  
Output : 11 is present 

Input :  N :   6 
Elements : 85 66 3 80 93 88  
Output : 11 is absent 
*/


#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int arr[], int iLength)
{
    
    for(int i = 0; i<iLength; i++)
    {
        if(arr[i] < 0)
        {
            arr[i] = -arr[i];
        }
        
        if(arr[i] == 11)
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
        
    }
    
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;
    BOOL bRet = FALSE;
    
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
    
    bRet = Check(p,iSize);
    
    if(bRet == TRUE)
    {
        printf("11 is present");
    }
    else{
        printf("11 is not present");
    }
    

    free(p);
    
    return 0;
    
}