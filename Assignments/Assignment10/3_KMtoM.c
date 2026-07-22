/*3. Write a program which accept distance in kilometre and convert it into meter. (1 
kilometre = 1000 Meter)

input : 5
output : 5000
*/

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int KM = 1000;
    int iKMtoM = iNo * KM;
    return iKMtoM;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter distance : ");
    scanf("%d",&iValue);
    
    iRet = KMtoMeter(iValue);
    
    printf("kilometers to meters is : %d ", iRet);
    
    return 0;
}