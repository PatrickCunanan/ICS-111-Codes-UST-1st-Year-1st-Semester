#include <stdio.h>
int main()
{
  int n, rev=0, rem,t;
  printf("Input number to check: ");
  scanf("%d", &n);
  t=n;
  while(t!=0)
  {
     rem=t%10;
     rev=rev*10+rem;
     t/=10;
  }

  if(rev==n)
      printf("%d is a palindrome.",n);
  else
      printf("%d is not a palindrome.",n);
  getch();
  return 0;
}
