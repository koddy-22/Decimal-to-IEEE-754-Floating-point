#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numRaw, numDec;
    int numInt, counterInt = 0, counterExp = 0, counterDec = 0, sign, numExp;
    int arrayInt[32];
    int arrayExp[32];
    int arrayDec[13];
    
    printf("Please enter the number below\n --> ");
    scanf("%f", &numRaw);
    
    numInt = (int)numRaw;
    numDec = numRaw - numInt;
    
    if (numRaw >= 0) {sign = 0;} else {sign = 1;}
    
    printf("%d ", sign);
    printf("| ");
    
    for (int i = 0; numInt >= 1; i++)
    {
        arrayInt[i] = numInt % 2;
        if (numInt == 1) {break;}
        numInt /= 2;
        counterInt = counterInt + 1;
    }
    
    numExp = counterInt + 127;
    
    for (int i = 0; numExp >= 1; i++)
    {
        arrayExp[i] = numExp % 2;
        if (numExp == 1) {break;}
        numExp /= 2;
        counterExp = counterExp + 1;
    }
    
    for (int i = counterExp; i >= 0; i--)
    {
        printf("%d ", arrayExp[i]);
    }
    
    printf("| ");
    
    for (int i = (counterInt - 1); i >= 0; i--)
    {
        printf("%d ", arrayInt[i]);
    }
    
    for (int i = 0; i < 13; i++)
    {
        numDec = numDec * 2;
        counterDec = counterDec + 1;
        if (numDec >= 1)
        {
            arrayDec[i] = 1;
            numDec = numDec - 1;
        }
        else
        {
            arrayDec[i] = 0;
        }
    }
    
    for (int i = 0; i < counterDec; i++)
    {
        printf("%d ", arrayDec[i]);
    }
    
    printf("\nthank you for using our program ");
}