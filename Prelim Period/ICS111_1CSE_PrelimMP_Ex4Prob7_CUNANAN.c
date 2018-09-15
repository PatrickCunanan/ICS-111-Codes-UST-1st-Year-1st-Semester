#include<stdio.h>

int main()
{
    int netBalance, payment, d1, d2, averageDailyBalance;
    float intRatePerMonth;
    double interest;
    printf("Enter the balance:");
    scanf("%d",&netBalance);
    printf("Enter the payment:");
    scanf("%d",&payment);
    printf("Enter number of days in the billing cycle:");
    scanf("%d",&d1);
    printf("Enter number of days payment is made before billing cycle:");
    scanf("%d",&d2);
    printf("Enter interest rate per month:");
    scanf("%f",&intRatePerMonth);
    
    averageDailyBalance=(netBalance*d1-payment*d2)/d1;
    interest=averageDailyBalance*intRatePerMonth;
    
    printf("The interest is: %.2f",interest);
    
    getch();
}
