//Program to calculate volume
//Patrick Bryan F. Cunanan 1CS-E
#include<stdio.h>

int main()
{
    int d, m; 
    double v;
    printf("Enter mass in grams:");
    scanf("%d",&m);
    printf("Enter density in grams per cubic cm:");
    scanf("%d",&d);
    v=m/d;
    printf("Volume is %.2f",v);
    
    getch();
}
