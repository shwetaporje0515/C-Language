#include<stdio.h>

/*
. Write a program which accept string from user and display it inn reverse order. 
Input :  “MarvellouS” 
Output :   “SuollevraM” 
*/


void Reverse(char *str)
{
    int j = 0;
    char rev[20];
    int iLength = 0;
    
    while(str[iLength] != '\0')
    {
        iLength++;
    }
    
    // printf("%d",iLength);
    
    for(int i = iLength - 1; i >=0; i--)
    {
        rev[j] = str[i];
        j++;
    }
    
    j = '\0';
    
    printf("Original string : %s\n", str);
    printf("Reversed string : %s", rev);
     
}

int main()
{
    char arr[20];
    int iRet = 0;
    
    printf("Enter a string : ");
    scanf("%[^'\n']s", arr);
    
    Reverse(arr);
    
    return 0;
}