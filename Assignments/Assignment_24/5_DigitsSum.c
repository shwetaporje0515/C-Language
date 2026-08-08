/*
5. Accept N numbers from user and display summation of digits of each number. 
Input :  N :   6 
Elements : 8225  665 3 76 953 858  
Output : 17 17 3 13 17 21 
*/

#include<stdio.h>
#include<stdlib.h>


int DigitsSum(int arr[], int iNo)
{
    int iDigit;
    for(int i = 0; i<iNo; i++)
    {
        // printf("%d",arr[i]);
        int iSum = 0;
        while(arr[i] != 0)
        {
            iDigit = arr[i] % 10;
            // printf("%d", iDigit);
            iSum = iSum + iDigit;
            arr[i] = arr[i] / 10;
        }
        printf("%d",iSum);
        printf("\n");
    }
}


int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    
    printf("Enter number of elements : ");
    scanf("%d",&iSize);
    
    p = (int *)malloc(iSize * sizeof(int));
    
    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    
    printf("\nEnter %d elments : \n", iSize);
    
    for(iCnt = 0; iCnt< iSize; iCnt++)
    {
        printf("Enter %d element : ", iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    
    DigitsSum(p,iSize);
    
    free(p);
    
    return 0;
}