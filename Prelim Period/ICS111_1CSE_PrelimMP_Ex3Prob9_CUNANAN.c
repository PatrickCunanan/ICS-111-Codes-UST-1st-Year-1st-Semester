#include<stdio.h>

int main()
{
	int fuel, milesPerGallon, milesWoRefuel;
	printf("Enter the fuel capacity:");
	scanf("%d", &fuel);
	printf("Enter miles per gallon:");
	scanf("%d", &milesPerGallon);
	milesWoRefuel=fuel*milesPerGallon;
	printf("The car can go %d miles without refueling",milesWoRefuel);
	
	getch();
}


