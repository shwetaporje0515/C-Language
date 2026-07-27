#include<stdio.h>

char Display(char iChar)
{
    if(iChar <= 'Z' && iChar >= 'A')
    {
        iChar = iChar + 32;
        printf("%c",iChar);
    }
    else if(iChar <= 'z' && iChar >= 'a')
    {
        iChar = iChar - 32;
        printf("%c",iChar);
    }
}

char main()
{
    char iValue;
    
    printf("Enter a character : ");
    scanf("%c",&iValue);
    
    Display(iValue);
    
    return 0;
}
