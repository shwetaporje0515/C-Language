MALLOC (memory allocation) : 



#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    int n, i;
    
    printf("Enter how many numbers : ");
    scanf("%d",&n);
    
    //Allocate memory
    
    ptr = (int*)malloc(n * sizeof(int));
    
    //Check if memory allocation is successfull
    
    if(ptr == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }
    
    //take input
    
    printf("Enter %d numbers : \n", n);
    
    for(int i = 0; i<n ; i++)
    {
        scanf("%d",&ptr[i]);
    }
    
    //Display values
    
    printf("\n You entered : \n");
    
    for(int i = 0; i< n ; i++)
    {
        printf("%d",ptr[i]);
    }
    
    //free Memory
    
    free(ptr);
    
    return 0;
}