/* Take input from the user and ask user to choose 0 for triangular pattern and 1 for reverse triangular pattern Then print the pattern accordingly

*
**
***
****

****
***
**
*

*/


#include<stdio.h>
int main()
{
	int choice;
	printf("Enter your Choice\n");
	printf("Press 0 for Triangular Pattern\nPress 1 for Reverse Triangular Pattern\n");
	scanf("%d",&choice);
	if(choice == 0)
	{	printf("Triangular Pattern...\n");
		printf("*\n");
		printf("**\n");
		printf("***\n");
		printf("****");
	}
	else if(choice == 1)
	{
		printf("Reverse Triangular Pattern....\n");
		printf("****\n");
		printf("***\n");
		printf("**\n");
		printf("*");
	}
}
