#include <stdio.h>

int main(void)
{
	int ch;
	scanf("%d", &ch);
	printf("%d\n", ch );
	if( ch > 3 )
		printf("Greater\n");
	else
		printf("Not Greater\n");

	int result = ch > 3;
	if(result)
        printf("Yes\n");
    else
    	printf("No\n");
	
	return 0;
}