#include<stdio.h>
int main()
{
    int num,numCheck;
    int evenSum=0;
    int oddSum=0;
    int counter=1;
    printf("Enter 5 positive integers = ");
    while(counter<=5)
    {
    scanf("%d",&num);
    numCheck=num%2;
    if (numCheck==1)
          {
          oddSum=oddSum+num;
          counter++;
          }
    else if (numCheck==0)
          {
          evenSum=evenSum+num;
          counter++;
          }
    }
    printf("Sum of even numbers = %d,sum of odd numbers = %d",evenSum,oddSum);
    getch();
    return 0;
}
    
