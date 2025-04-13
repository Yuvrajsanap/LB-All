#include<stdio.h>

void CheckDigit(int iNo)
{
    int iDigit=1;

    printf("Number is %d\n",iNo);

    printf("-------------------\n");
    iDigit=iNo%10;
    printf("Digit is %d\n",iDigit);
    iNo=iNo/10;
    printf("Number is %d\n",iNo);

    printf("--------------------\n");
    iDigit=iNo%10;
    printf("Digit is %d\n",iDigit);
    iNo=iNo/10;
    printf("Number is %d\n",iNo);

    printf("--------------------\n");
    iDigit=iNo%10;
    printf("Digit is %d\n",iDigit);
    iNo=iNo/10;
    printf("Number is %d\n",iNo);

    
}
int main()
{
    int iValue=1;
    printf("Enter number\n");
    scanf("%d",&iValue);

    CheckDigit(iValue);
    return 0;
}