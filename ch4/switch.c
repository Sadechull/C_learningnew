/* switch语句并不是一个循环，它是和case标签一起使用的选择执行语句，但是case标签并不能结束
** 这个过程，如果想分隔各个case，需要加上break语句。
*/

#include <stdio.h>

int main()
{
	char ch1;

	// switch(ch1 = getchar())
	// {
	// 	case '1':
	// 		printf("你的英雄是法师\n");
	// 		break;
	// 	case '2':
	// 		printf("你的英雄是圣骑士\n");
	// 		break;
	// 	case '3':
	// 		printf("你的英雄是猎人\n");
	// 		break;
	// 	case '4':
	// 		printf("你的英雄是术士\n");
	// 		break;
	// 	case '5': /*多个case标签可以对应一个声明*/
	// 	case '6':
	// 	case '7':
	// 	case '8':
	// 		printf("你的英雄是克苏恩\n");
	// 	break;
	// 	default:
	// 		printf("你的英雄是少主\n");
	// 	break;

	// }

	char ch2;
	int lines = 0, words = 0, chars = 1;
    while(lines < 10)//(ch2 = getchar() != EOF))
    {
		
		// if( (ch2 = getchar()) == '$')
		// 	break;
    	switch( ch2 = getchar())
		{
			case '$':
				goto quit; /*break语句只能跳出当前循环，goto可以解决这个问题*/
			case '\n':
				lines += 1;
			case ' ':
			case '\t':
				words += 1;
			default:
				chars += 1;

		}
		

    }
	quit: ;
		
	printf("lines: %d\n", lines);
	printf("words: %d\n", words);
	printf("chars: %d\n", chars);

	return 0;
}