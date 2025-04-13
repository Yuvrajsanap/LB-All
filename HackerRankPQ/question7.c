//palindrome ->means after reversing that number the digit equal to its orignal number.

#include<stdio.h>
#include<stdbool.h>

int CheckPalindrome(int iNo)
{
    int iDigit=0;
    int iRev=0;
    int iCopy=iNo;

    while(iNo!=0)
    {
        iDigit=iNo%10;
        iNo=iNo/10;
        iRev=(iRev*10)+iDigit;
        
    }
    return (iRev==iCopy);
    }
int main()
{
    int iValue=0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    bool bRet=false;

    bRet=CheckPalindrome(iValue);

    if(bRet==true)
    {
        printf("Number is a palindrome\n",iValue);

    }
    else{
        printf("Number is not a palindrome\n");
    }

    return 0;
}