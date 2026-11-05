#include <stdio.h>
int main()
{
	int n, i;
	printf("Digite um numero: \n");
	scanf_s("%d", &n);
	for (i = n; i > 0; i--)
	{
		printf("%d\n", i);
	}
	return 0;
}