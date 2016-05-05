#include <stdio.h>
/*
int是整型变量，double是双精度浮点型变量，本例的输出说明如果给int型
变量赋上非整型数，则会省略小数。
*/
int main(void)
{
	int n1;
	double n2;

    n1=9.99;
    n2=9.99;

    printf("int 型变量n1的值:%d\n", n1);
    printf("n1/2:%d\n",n1/2 );
    printf("double 型变量n2的值:%f\n", n2); /*注意输出double型值时，要使用％f*/
    printf("n2/2:%f\n",n2/2.0000 );

    double vx,vy;

    puts("请输入两个数。");
    printf("实数vx:");  scanf("%lf",&vx); 
    printf("实数vy:");  scanf("%lf",&vy);

    printf("vx+vy=%f\n", vx+vy);
    printf("vx-vy=%f\n", vx-vy);
    printf("vx*vy=%f\n", vx*vy);
    printf("vx/vy=%f\n", vx/vy);

    int na=23;
    double ave;

    ave=(double)na/2;

    printf("na的半值是：%5.1f。\n", ave); /*％5.1f显示至少5位的浮点数，但小数点后只显示一位*/

    return 0;


}