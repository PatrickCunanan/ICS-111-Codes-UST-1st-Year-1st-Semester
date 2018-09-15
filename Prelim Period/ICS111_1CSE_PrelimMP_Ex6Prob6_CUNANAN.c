#include<stdio.h>


int main()
{
	int firstnum, secondnum, sumeven = 0, number; 
	int square = 0, squareodd = 0, sumsquare = 0;
	int odd, even;
	
	printf("Enter two integers [first number must be less than the second number] : \n");
	scanf("%d%d", &firstnum, &secondnum);
	if (firstnum % 2 == 0)
	{
	odd = firstnum + 1;
	even = firstnum + 2;
	}
	else
	{
	odd = firstnum + 2;
	even = firstnum + 1;
	}
	printf("Odd numbers between %d and %d:", firstnum, secondnum);
	for (odd; odd < secondnum; odd += 2)
	{
	printf("%d ", odd);
	}
	printf("\n");
	printf("Sum of all even numbers between %d and %d:", firstnum, secondnum);
	for (even; even < secondnum; even += 2)
	{
	sumeven += even;
	}
	printf("%d \n", sumeven);
	printf("Numbers and their squares:");
	for (number = firstnum; number <= secondnum; number += 1)
	{
	printf("%d:", number);
	square = number * number;
	printf("%d ", square);
	}
	if (firstnum % 2 == 0)
	{
	odd = firstnum + 1;
	even = firstnum + 2;
	}
	else
	{
	odd = firstnum + 2;
	even = firstnum + 1;
	}
	printf("\n");
	printf("Sum of the square of odd numbers between %d and %d: ", firstnum, secondnum);
	for (odd; odd < secondnum; odd += 2)
	{
	squareodd = odd * odd;
	sumsquare += squareodd;
	}
	printf("%d", sumsquare);

	getch();
	return 0;
}
