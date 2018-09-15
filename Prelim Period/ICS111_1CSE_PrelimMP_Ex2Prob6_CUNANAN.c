#include<stdio.h>

int main()
{
    int a,b,c,s;
    float area;
    printf("Enter measure of the three sides:");
    scanf("%d %d %d",&a,&b,&c);
    s=(0.5)*(a+b+c);
    area= sqrt (s*(s-a)*(s-b)*(s-c));
    printf("The area is: %.2f\n",area);
    
    getch();
}
