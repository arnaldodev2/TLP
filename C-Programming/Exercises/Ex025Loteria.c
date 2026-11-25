#include <stdio.h>
#include <time.h>
int main()
{
	srand(time(NULL));
	int n[5];
	for (int c = 0; c < 4; c++)
	{
		n[5] = rand() % 50 + 1;
	}
}