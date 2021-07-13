#include<stdio.h>
int fact_iterative(int n)
{   int fact = 1 ;
    for(int i = 1 ; i <= n ; i++)
    {
        fact = fact * i ;
    }
    return fact;

}
int main()
{
    int num;
    printf("Enter Number : ");
    scanf("%d", &num);
    if(num == 0 || num==1)
    {
        printf("Factorial is 1");
    }
    else
    {
        printf("Factorial of %d is %d",num,fact_iterative(num));
    }
}