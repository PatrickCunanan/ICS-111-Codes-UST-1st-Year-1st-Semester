// Program to predict whether number is positive, negative or zero
#include<stdio.h>

int main()
{
    int x;    
    printf("Enter Number:");
    scanf("%d",&x);
    if (x>0)
    {
            printf("%d is a positive number",x);
    }
    else if (x<0)
    {
            printf("%d is a negative number",x);
    }
    else if (x==0)
    {
         printf("Number is zero",x);
    }
    
    getch();
    return 0;
}
