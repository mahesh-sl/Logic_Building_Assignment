#include <stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }


    for(iCnt = 1;iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
            printf("%d ",iCnt);  
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    PrintEven(iValue);
    
    return 0;
}