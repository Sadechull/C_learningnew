#include <stdio.h>
#define MAXNUMBER 10

int main(void)
{
	int i;
	for( i = 0; i < MAXNUMBER; i += 1)
	{
		printf("%d 的平方：%d\n", i, i*i);
	}

	return 0;
}