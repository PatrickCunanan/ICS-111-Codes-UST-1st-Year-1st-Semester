#include<stdio.h>

int main()
{
    int q, d, n, p, t1, t2, t3, totalPennies;
    printf("Input number of quarters:");
    scanf("%d",&q);
    printf("Input number of dimes:");
    scanf("%d",&d);
    printf("Input number of nickels:");
    scanf("%d",&n);
    printf("Input number of pennies:");
    scanf("%d",&p);
    t1=q*25;
    t2=d*10;
    t3=n*5;
    totalPennies=t1+t2+t3+p;
    printf("Total number of pennies is: %d",totalPennies);
    
    getch();
}
    
