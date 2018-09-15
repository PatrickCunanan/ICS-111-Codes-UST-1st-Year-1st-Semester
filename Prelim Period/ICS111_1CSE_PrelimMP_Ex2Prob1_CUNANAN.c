#include<stdio.h>

int main()
{
    int ts1, ts2, ts3, ts4; 
    float w1, w2, w3, w4;
    double average;
    
    printf("Enter 1st score and respective weight:");
    scanf("%d%f",&ts1,&w1);
    printf("Enter 2nd score and respective weight:");
    scanf("%d%f",&ts2,&w2);
    printf("Enter 3rd score and respective weight:");
    scanf("%d%f",&ts3,&w3);
    printf("Enter 4th score and respective weight:");
    scanf("%d%f",&ts4,&w4);
    
    average=((ts1*w1)+(ts2*w2)+(ts3*w3)+(ts4*w4));
    
    printf("The weighted average is: %.2f\n",average);
    
    
    getch();
}
