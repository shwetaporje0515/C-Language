#include<stdio.h>

int main()
{
    char str[20], rev[20];
    int i, j, length = 0;
    
    printf("Enter String : ");
    scanf("%s",str);
    
    while(str[length] != 0)
    {
        length++;
    }
    
    j = 0;
    
    for(i = length-1; i >= 0; i--)
    {
        rev[j] = str[i];
        j++;
    }
    
    rev[j] = '\0';
    
    printf("Original string is : %s\n",str);
    printf("Reversed string is : %s",rev);
    
    return 0;
}

