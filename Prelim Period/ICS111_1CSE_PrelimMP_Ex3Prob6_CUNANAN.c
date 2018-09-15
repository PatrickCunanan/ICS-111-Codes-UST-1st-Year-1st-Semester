//Exercise 3 Problem #6
//Patrick Bryan F. Cunanan
#include<stdio.h>

int main(void)
{
    double s1;
    double s2;
    double s3;
    double s4;
    double s5;
    double a;
    
    printf("Enter score 1:");
    scanf("%lf",&s1);
    
    printf("Enter score 2:");
    scanf("%lf",&s2);
    
    printf("Enter score 3:");
    scanf("%lf",&s3);
    
    printf("Enter score 4:");
    scanf("%lf",&s4);
    
    printf("Enter score 5:");
    scanf("%lf",&s5);
    
    a = ( s1 + s2 + s3 + s4 + s5 ) / 5;
    
    printf("Average score is: %.2f", a);
    
    getch();
    return 0;
}
