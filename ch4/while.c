#include <stdio.h>

int main(void)
{
	char ch;

	while((ch = getchar()) != EOF)
	{
		if( ch < '0' || ch > '9')
		{
			if( ch == 'e')
			    break;     /*只输出数字，若输入e，则结束循环*/
			else
				continue;
		}
			
		putchar(ch);
		if( ch == 'e')
			break;
	}
		



	return 0;


}