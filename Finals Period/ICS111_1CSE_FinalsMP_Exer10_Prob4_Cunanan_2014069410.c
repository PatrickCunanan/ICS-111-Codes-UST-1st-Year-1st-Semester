#include<stdio.h>
int main()
{
float usd;
float bphp=43, sphp=42;
float *Pbphp, *Psphp;

Pbphp=&bphp;
Psphp=&sphp;

printf("Enter the amount of money in US Dollars:");
scanf("%f",&usd);

printf("Buy amount in Philippine pesos: %.2f\n",usd*(*Pbphp));
printf("Sell amount in Philippine pesos: %.2f\n",usd*(*Psphp));

getch();
return 0;
}
