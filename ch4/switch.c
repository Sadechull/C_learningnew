/* switch语句并不是一个循环，它是和case标签一起使用的选择执行语句，但是case标签并不能结束
** 这个过程，如果想分隔各个case，需要加上break语句。
*/

#include <stdio.h>

int main()
{
	char ch;

	switch(ch = getchar())
	{
		case '1':
			printf("你的英雄是法师");
			break;
		case '2':
			printf("你的英雄是圣骑士");
			break;
		case '3':
			printf("你的英雄是猎人");
			break;
		case '4':
			printf("你的英雄是术士");
			break;
		case '5': /*多个case标签可以对应一个声明*/
		case '6':
		case '7':
		case '8':
			printf("你的英雄是克苏恩");
		break;
		default:
			printf("你的英雄是少主");

	}

	return 0;
}