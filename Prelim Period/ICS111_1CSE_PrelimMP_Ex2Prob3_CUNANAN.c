#include<stdio.h>

int main ()
{
    int p, r;
    double psi;
    printf("Enter price of pizza:");
    scanf("%d",&p);
    printf("Enter radius of pizza:");
    scanf("%d",&r);
    psi=p/(3.1416*r*r);
    printf("Price per square inch: %.2f",psi);
    
    getch();
}
