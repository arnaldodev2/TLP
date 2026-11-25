#include <stdio.h>
int main()
{
	int c;
	char* n[5] = { "Arnaldo", "Dinis", "SP", "GS", "Danny" };
	for (c = 4; c >= 0; c--)
	{
		printf("%s--", n[c]);
	}
	return 0;
}