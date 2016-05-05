#include <stdio.h>
#define number 10

int main(void)
{
	int i;
	for( i = 0; i < number; i += 1)
	{
		printf("%d的平方：%d\n", i, i*i);
	}

	return 0;
}