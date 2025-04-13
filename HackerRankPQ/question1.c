#include<stdio.h>
#include<stdbool.h>
int CheckPerfect(int iNo)
{
    int iCnt=0;
    int iSum=0;
    
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if((iNo%iCnt)==0){
        iSum=iSum+iCnt;
        }
    }
    if(iNo==iSum)
    {
      return  true;
    }
    else{
       return false;
    }
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet=CheckPerfect(iValue);
     
     if(iRet==true)
     {
        printf("%d is perfect number",iValue);
     }
     else{
        printf("%d is not perfect number",iValue);
     }
    return 0;
}