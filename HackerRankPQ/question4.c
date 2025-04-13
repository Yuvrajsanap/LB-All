#include<stdio.h>

int CountDigit(int iNo)
{
    int iCount=0;

    while(iNo!=0)
    {
        iNo=iNo/10;
        iCount++;
    }
    return iCount;

}
int main()
{
    int iValue=1;
       printf("Enter a number\n");
       scanf("%d",&iValue);

    int iRet=0;
    iRet=CountDigit(iValue);

    printf("Number of digit are %d\n",iRet);
    return 0;
}