// Program to convert weight in kilograms to pounds.
#include<stdio.h>

int main()
{
    float y;
    double x;
    
    printf("Enter the weight in kilograms:");
    scanf("%f",&y);
    
    x=y*2.2;
    
    printf("Kilograms:%.2f kgs\n",y);
    printf("Pounds:%.2f lbs",x);
    
    getch();
}
