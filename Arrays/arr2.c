#include<stdio.h>
int main()
{   int sum = 0 ;
    int arr[5] = {10,20,30,40,50};
    for(int i = 0 ; i < 5 ; i++)
    {
        sum = sum + arr[i];
    }
    printf("The Sum of Elements of the array is :- %d",sum);
}
