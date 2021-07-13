#include<stdio.h>
int fact_recursive(int n)
{
	if(n==0 || n==1)
	{
		return 1;
	}
	else
	{
		return n * fact_recursive(n-1);
	}
}
int main()
{
	int num;
	printf("Enter number");
	scanf("%d",&num);
	printf("The factorial of %d is %d",num,fact_recursive(num));
	return 0;
}