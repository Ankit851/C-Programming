#include<stdio.h>
int main()
{
	int arr[56] ;
	int n , a ;
	printf("Enter number of terms ");
	scanf("%d",&n);
	for(int i = 0 ; i < n ; i++)
	{
		scanf("%d",&arr[i]);
	}
	// Picking up elements from the array index-wise
	for(int i = 0 ; i < n ; i++)
	{	
		// Comparing array elements for sorting
		for(int j = i + 1 ; j < n ; j++)
		{
			if(arr[i] > arr[j])
			{
				a = arr[i] ;
				arr[i] = arr[j] ;
				arr[j] = a ;

			}
		}
	}
	printf("The array of elements in sorted order\n");
	for(int i = 0 ; i < n ; i++)
	{
		printf("%d ",arr[i]);
	}
}
