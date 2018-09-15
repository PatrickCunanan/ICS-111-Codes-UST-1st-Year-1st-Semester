#include<stdio.h>
#include<conio.h>
#define MAX 20
void main()
{
 int a[MAX];
 int i,size,min=0;

 printf("Input size of array: ");
 scanf("%d",&size);
 printf("Enter %d numbers: ", size);
 for(i=0;i<size;i++)
 {
  scanf("%d",&a[i]);
 }
 min=a[0];
 for(i=1;i<size;i++)
 {
  if(min>a[i])
   min=a[i];
 }
 printf("Smallest number = %d", min);
 getch();
 return 0;
}
