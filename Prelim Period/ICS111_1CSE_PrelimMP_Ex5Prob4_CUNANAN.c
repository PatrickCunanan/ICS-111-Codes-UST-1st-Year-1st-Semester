#include<stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three sides of triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    
    if ((a*a)+(b*b)==(c*c))
    {
    printf("This is a right triangle");
    }
    
    else
    {
    printf("This is not right triangle");
    }
    
    getch();
}
    
