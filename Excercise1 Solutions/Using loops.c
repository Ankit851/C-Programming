𝕄𝕖𝕥𝕙𝕠𝕕 𝟚 : 𝔹𝕪 𝕦𝕤𝕚𝕟𝕘 𝕝𝕠𝕠𝕡𝕤 :

#include<stdio.h>
int main()
{
	//method 2: Using Loops

	int table;
	printf("\nEnter the number you want multiplication table of : ");
	scanf("%d", &table);

	printf("Multiplication table of %d is as follows:\n\n", table);

	for (int i =1; i<=10, i++)
	{
		printf("%d*%d = %d\n", table, i, table*i );
	}
	
	
	return 0;
}
