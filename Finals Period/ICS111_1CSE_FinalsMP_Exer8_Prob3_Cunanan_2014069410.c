#include<stdio.h>
int largestIndex(int x[], int y);
int main()
{
	int i,size,a,b;
	printf("Input size of array: ");
	scanf("%d",&size);
	int arr[size];
	printf("Enter %d numbers: ",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(a=0;a<size;a++)
	{
		if(largestIndex(arr,size)==a)
		{b=arr[a];}
	}
	printf("Largest element is %d at index %d",b,largestIndex(arr,size));

	getch();
	return 0;
}
int largestIndex(int x[], int y)
{
	int index,i;
	if(y!=1)
	{
		int n=x[0];
		for(i=1;i<y;i++)
		{
			if(x[i]>n)
			{n=x[i];
			index=i;}
		}
	}
	return index;
}

