// CALLOC (Contiguous Memory)


#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    
    ptr = (int *) calloc (5, sizeof(int));
    
    for(int i = 0; i<5; i++)
    {
        printf("%d",ptr[i]);
    }
    
    free(ptr);
    
    return 0;
}


// Initially zero will be there in the memory in CALLOC