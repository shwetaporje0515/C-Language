// REALLOC (Re - allocation)


#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    
    ptr = (int*) malloc (3 * sizeof(int));
    
    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;
    
    ptr = (int*) realloc (ptr, 5 * sizeof(int));
    
    ptr[3] = 40;
    ptr[4] = 50;
    
    for(int i = 0; i<5; i++)
    {
        printf("%d",ptr[i]);
    }
    
    free(ptr);
    
    return 0;
}


