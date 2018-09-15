//Exercise 3 Problem #5
//Patrick Bryan F. Cunanan
#include<stdio.h>

int main()
{
    float x;
    int y;
    printf("Input a decimal number:");
    scanf("%f",&x);
    if((x-(int)x)<0.5)
    {
    y=(int)x;
    }
    else
    {
    y=(int)x+1;
    }
    printf("When rounded of to nearest integer: %d",y);
    
    getch();
    return 0;
}
