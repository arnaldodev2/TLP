#include <stdio.h>
int main)
{
	int n1, n2, n3, maior;
	printf("Enter the first number: ");
	scanf_("%d", &n1);
	printf("Enter the secocnd number: ");
	scanf_("%d", &n2);
	printf("Enter the third number: ");
	scanf_s("%d", &n3);
	maior = n1;
	if (maior < n2)
	{
		maior = n2;
	}
	if (maior < n3)
	{
		maior = n3
	}
	printf("The biggest number is: %d\n", maior);

	return 0;
}