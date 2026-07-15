#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

char ChkVowel(char cValue)
{
    if (cValue == ('a' || 'A') || ('e' || 'E') || ('i' || 'I') || ('o' || 'O') || ('u' || 'U'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;
    
    printf("Enter character : ");
    scanf("%c",&cValue);
    
    bRet = ChkVowel(cValue);
    
    if(bRet == TRUE)
    {
        printf("It is vowel");
    }
    else
    {
        printf("It is not vowel");
    }
    
    return 0;
}