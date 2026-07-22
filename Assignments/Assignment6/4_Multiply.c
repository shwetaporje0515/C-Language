/*4. Write a program which accept three numbers and print its multiplication.*/



#include <stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMult = 1;

    if(iNo1 != 0)
    {
        iMult = iMult * iNo1;
    }

    if(iNo2 != 0)
    {
        iMult = iMult * iNo2;
    }

    if(iNo3 != 0)
    {
        iMult = iMult * iNo3;
    }

    if(iNo1 == 0 && iNo2 == 0 && iNo3 == 0)
    {
        return 0;
    }

    return iMult;
}

int main()
{
    int iNo1, iNo2, iNo3;

    scanf("%d %d %d", &iNo1, &iNo2, &iNo3);

    printf("%d", Multiply(iNo1, iNo2, iNo3));

    return 0;
}














// int Multiply(int iNo1, int iNo2, int iNo3)
// {
//     if(iNo1 == 0 && iNo2 == 0 && iNo3 == 0)
//     {
//         return 0;
//     }
//     else if(iNo1 == 0)
    
//     {
//         int iMul = iNo2 * iNo3;
        
//     }
//     else if(iNo2 == 0)
//     {
//         int iMul = iNo1 * iNo3;
//         if(iNo2 == 0 && iNo3 == 0)
//         {
//             return iNo1;
//         }
//         else if(iNo1 == 0 && iNo3 == 0)
//         {
//             return iNo2;
//         }
//     }
//     else if(iNo3 == 0)
//     {
//         int iMul = iNo1 * iNo2;
//         if(iNo1 == 0 && iNo3 == 0)
//         {
//             return iNo1;
//         }
//         else if(iNo1 == 0 && iNo3 == 0)
//         {
//             return iNo2;
//         }
//     }
//     if(iNo1 == 0 && iNo2 == 0)
//         {
//             return iNo3;
//         }
        
//     else
//     {
//         int iMul = iNo1 * iNo2 * iNo3;
//         return iMul;
//     }
    
    
// }

// int main()
// {
//     int iValue1 = 0, iValue2 = 0, iValue3 = 0;
//     int iRet = 0;
    
//     printf("Enter the numbers : ");
//     scanf("%d%d%d",&iValue1,&iValue2,&iValue3);
    
//     iRet = Multiply(iValue1,iValue2,iValue3);
//     printf("Multiplication of numbers is : %d",iRet);
    
//     return 0;
// }


// #include <stdio.h>

// int Multiply(int iNo1, int iNo2, int iNo3)
// {
//     int iMult = 1;

//     if(iNo1 != 0)
//     {
//         iMult = iMult * iNo1;
//     }

//     if(iNo2 != 0)
//     {
//         iMult = iMult * iNo2;
//     }

//     if(iNo3 != 0)
//     {
//         iMult = iMult * iNo3;
//     }

//     if(iNo1 == 0 && iNo2 == 0 && iNo3 == 0)
//     {
//         return 0;
//     }

//     return iMult;
// }

// int main()
// {
//     int iNo1, iNo2, iNo3;

//     scanf("%d %d %d", &iNo1, &iNo2, &iNo3);

//     printf("%d", Multiply(iNo1, iNo2, iNo3));

//     return 0;
// }
