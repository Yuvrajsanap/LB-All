#include<stdio.h>

int SumoFDigit(int iNo)
{
   int iSum=0;

   while(iNo!=0)
   {
    iSum=iSum+(iNo%10);
    iNo=iNo/10;
   }
   return iSum;
}
int main()
{
    int iValue=0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    int iRet=0;
    iRet=SumoFDigit(iValue);
    printf("Sum of digit are %d",iRet);
    return 0;
}