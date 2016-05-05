#include <stdio.h>

int main(void)
{
	int column = 0; /*一定要给column赋初值，否则其初值将不确定*/
	// printf("%d\n", column);
	
	do
	{
		column += 1;
		putchar('a');

	}while(column%8!=0);

	return 0;
}