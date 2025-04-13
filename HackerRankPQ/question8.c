//on N number

#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[],int iSize)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("%d\t",Arr[iCnt]);
    }
}
int main()
{
    int iCount=0,iCnt=0;
    int *ptr=NULL;

    printf("Enter the number that you want to enter\n");
    scanf("%d",&iCount);

   ptr=(int *)malloc(iCount * sizeof(int));

    printf("Enter the number \n");
   for(iCnt=0;iCnt<iCount;iCnt++)
   {
    scanf("%d",&ptr[iCnt]);
   }

    Display(ptr,iCount);

    free(ptr);

    return 0;
}