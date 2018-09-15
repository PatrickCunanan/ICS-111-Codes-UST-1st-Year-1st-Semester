#include<stdio.h>


int main()
{
int i;
int cCapital=0,cSmall=0;
char ch[80];
float totalChar;



printf("Input string of capital and small letter: ");
gets(ch);

i=0;
while (ch[i]!='\0'){
if (ch[i]>='A'&&ch[i]<='Z'){
    cCapital++;}
if (ch[i]>='a'&&ch[i]<='z'){
    cSmall++;}
i++;
}

totalChar=cCapital+cSmall;

printf("Number of capital letters: %d\n",cCapital);
printf("Number of small letters: %d\n",cSmall);
printf("Percentage of capital letters: %.2f%%\n",((100/totalChar)*cCapital));
printf("Percentage of small letters: %.2f%%\n",((100/totalChar)*cSmall));

getch();
return 0;
}
