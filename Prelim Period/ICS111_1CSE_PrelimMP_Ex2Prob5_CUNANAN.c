#include<stdio.h>

int main()
{
    int origPrice, sellPrice;
    printf("Enter original price:");
    scanf("%d",&origPrice);
    sellPrice=(origPrice*0.6)+origPrice;
    printf("Selling Price is: $%d",sellPrice);
    
    getch();
}
