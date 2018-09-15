#include <stdio.h>

int main()
{
  int x, i; 
  int primeCheck=0;
  
  printf("Enter a number: ");
  scanf("%d",&x);
  
  for(i=2;i<=x/2;++i)
  {
      if(x%i==0)
      {
          primeCheck=1;
          break;
      }
  }
  if (primeCheck==0)
      {
      printf("%d is a prime number.",x);
      }
  else
      {
      printf("%d is not a prime number.",x);
      }
      
  getch();
  return 0;
}
