#include"Fibonacci.h"

int main()
{
	int input,result,i,n;
	printf("Enter number of elements : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("\nEnter the number %d : ",i+1);
	scanf("%d",&input);
	result=nearestfib(input);
	printf("The nearest fibonacci number is : %d\n",result);
	}
	getch();
	return 0;
}
	