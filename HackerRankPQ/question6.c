#include<stdio.h>

int RevDigit(int iNo)
{
    int iDigit=0;
    int iRev=0;

    while(iNo!=0)
    {
        iDigit=iNo%10;
        iNo=iNo/10;
        iRev=(iRev*10)+iDigit;
    }
    return iRev;
}
int main()
{
    int iValue=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    int iRet=0;

    iRet= RevDigit(iValue);

    printf("Rev number are %d\n",iRet);

    return 0;
}