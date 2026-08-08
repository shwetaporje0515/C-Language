/*
4. Accept N numbers from user and display all such numbers which contains  3 digits in it. Input :  N :   6 
Elements : 8225  665 3 79 953 858
Output : 665 953 858 
*/

#include<stdio.h>
#include<stdlib.h>


void Digits(int arr[], int iNo)
{
    for(int i = 0; i<iNo; i++)
    {
        if(arr[i] >= 100 && arr[i] <= 999)
        {
            printf("%d\t",arr[i]);
        }
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
    
    Digits(p,iSize);
    
    free(p);
    
    return 0;
}