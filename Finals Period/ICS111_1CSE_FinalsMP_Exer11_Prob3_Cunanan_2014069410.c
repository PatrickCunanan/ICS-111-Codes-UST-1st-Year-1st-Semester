#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define menuItems1 8


	struct menuItemType
	{
	    char menuItem[125];
	    double menuPrice;
	};
	int getData(struct menuItemType menuList[]);
	int showMenu(struct menuItemType menuList[], int x);
    void printCheck(struct menuItemType menuList[], int menuOrder[], int menuItems);
	int main()
	{

	    struct menuItemType menuList[menuItems1];
	    const int menuItems = 8;
		int menuOrder[menuItems1] = {0};
	    int orderChoice = 0;
	    bool ordering = true;
	    int count = 0;

	    getData(menuList);

	    showMenu(menuList, menuItems);
	    while(ordering)
	    {
	        printf("Please enter the number for the item you would like to order, or enter [0]\nif the order is complete.\n");
	        scanf("%d", &orderChoice);

	        if (orderChoice > 0 && orderChoice <= menuItems)
	        {
	            menuOrder[orderChoice - 1] += 1;
	        }
            else
            {
                ordering = false;
            }
	    }
	    printCheck(menuList, menuOrder, menuItems);
		getchar(); getchar();
	    return 0;
	}

	int getData(struct menuItemType menuList[])
	{
	    struct menuItemType PE;
	    struct menuItemType BE;
	    struct menuItemType Muffin;
	    struct menuItemType FrenchToast;
	    struct menuItemType FruitBasket;
	    struct menuItemType Cereal;
	    struct menuItemType coffee;
	    struct menuItemType tea;

	    memcpy(PE.menuItem, "Plain  Egg     ", sizeof PE.menuItem);
	    PE.menuPrice = 1.45;
	    memcpy(BE.menuItem, "Bacon and Egg     ", sizeof BE.menuItem);
        BE.menuPrice = 2.45;
        memcpy(Muffin.menuItem, "Muffin     ", sizeof Muffin.menuItem);
	    Muffin.menuPrice = 0.99;
	    memcpy(FrenchToast.menuItem, "French Toast   ", sizeof FrenchToast.menuItem);
	    FrenchToast.menuPrice = 1.99;
	    memcpy(FruitBasket.menuItem, "Fruit Basket     ", sizeof FruitBasket.menuItem);
	    FruitBasket.menuPrice = 2.49;
	    memcpy(Cereal.menuItem, "Cereal     ", sizeof Cereal.menuItem);
	    Cereal.menuPrice = 0.69;
	    memcpy(coffee.menuItem, "Coffee      ", sizeof coffee.menuItem);
	    coffee.menuPrice = 0.50;
	    memcpy(tea.menuItem, "Tea        ", sizeof tea.menuItem);
	    tea.menuPrice = 0.75;

	    menuList[0] = PE;
	    menuList[1] = BE;
	    menuList[2] = Muffin;
	    menuList[3] = FrenchToast;
	    menuList[4] = FruitBasket;
	    menuList[5] = Cereal;
	    menuList[6] = coffee;
	    menuList[7] = tea;
	}

	int showMenu(struct menuItemType menuList[], int x)
	{
	    int count;

	    printf("Welcome to Johnny's Restaurant\n");
	    printf("What would you like to order?\n");
	    for(count = 0; count < x; count++)
	    {
	        printf("[%d] %s   $%.2lf\n", count + 1, menuList[count].menuItem, menuList[count].menuPrice);
	    }
	}

	void printCheck(struct menuItemType menuList[], int menuOrder[], int menuItems)
	{
	    double checkTotal = 0;
	    double checkTax = 0;
	    const double TAX = .05;
	    int i;
        printf("Welcome to Johnny's Restaurant\n");
        printf("Customer check: \n");
	    for(i = 0; i < menuItems; i++)
	    {
			if(menuOrder[i] > 0) {
				printf("%s    $%.2lf\n",  menuList[i].menuItem, (menuList[i].menuPrice * menuOrder[i]));
				checkTotal += (menuList[i].menuPrice * menuOrder[i]);
			}
	    }
	    checkTax = checkTotal * TAX;
	    checkTotal += checkTax;
	    printf("Tax                 $%.2lf\n", checkTax);
        printf("Amount Due          $%.2lf\n", checkTotal);

	}
