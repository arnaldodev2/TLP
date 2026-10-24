#include <stdio.h>
int main()
{
	float n1, n2, n3, n4, media;
	printf("Enter a number:");
	scanf_s("%f", &n1);
	printf("Enter a number:");
	scanf_s("%f", &n2);
	printf("Enter a number:");
	scanf_s("%f", &n3);
	printf("Enter a number:");
	scanf_s("%f", &n4);
	media = (n1 + n2 + n3 + n4) / 4;
	printf("Media: %.2f", media);
	return 0;
}