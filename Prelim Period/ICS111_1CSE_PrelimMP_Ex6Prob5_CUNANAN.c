#include <stdio.h>
int main()
{
    int firstNum,firstNum2,secondNum,secondNum2,checkNum,oddSq=0,oddSumSq=0,evenSum=0,numSq;
    printf("Input 2 numbers, the first number must be less than the second number: ");
    scanf("%d%d",&firstNum,&secondNum);
    firstNum2=firstNum-1;
    secondNum2=secondNum-1;
    printf("The odd numbers are: ");
    while(firstNum<secondNum2)
    {
        firstNum++;
        checkNum=firstNum%2;
        if (checkNum==1)
            {
                printf("%d ",firstNum);
                oddSq=firstNum*firstNum;
                oddSumSq+=oddSq;
            }
        else
            {
            evenSum+=firstNum;
            }
    }
    printf("\n");
    printf("Sum of even numbers: %d\n",evenSum);
    printf("The numbers when squared are: ");
    while(firstNum2<=secondNum)
    {
    firstNum2++;
    numSq=firstNum2*firstNum2;
    printf("%d ",numSq);	
    }
    printf("\nThe sum of the squares of the odd numbers is: %d",oddSumSq);
    getch();
    return 0;
}
