#include <stdio.h>


int main()
{
double la, ia, nla, mi, p, mp;
int mcounter = 0;

printf("Enter the amount of the loan:");
scanf("%lf", &la);
printf("Enter the interest amount:");
scanf("%lf", &ia);
printf("Enter the monthly payment:");
scanf("%lf", &mp);

mi = ia * 0.01 / 12;

while (la >= 0)
{
p = mp - la * mi;
la = la - p;
mcounter++;
}
printf("Number of months to repay:%d", mcounter);

getch();
}
