#include<stdio.h>
#include<string.h>

int getData(char character, char word[50], int number, float decimal);
int displayData(int number, float decimal, char character, char word[50]);
int main()
{
char character;
char word[50];
int number;
float decimal;

printf("Enter a character:");
scanf("%c",&character);
printf("Enter a word:");
scanf("%s",&word);
printf("Enter a whole number:");
scanf("%d",&number);
printf("Enter a decimal number:");
scanf("%f",&decimal);

printf("\nYou entered the following data:\n");
printf("Letter:%c\n",character);
printf("String:%s\n",word);
printf("Integer:%d\n",number);
printf("Float:%.2f\n",decimal);

printf("\nYour data displayed again:\n");
printf("Integer:%d\n",number);
printf("Float:%.2f\n",decimal);
printf("Letter:%c\n",character);
printf("String:%s\n",word);

getch();
return 0;
}
