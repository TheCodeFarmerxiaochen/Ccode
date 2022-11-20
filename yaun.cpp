#include<stdio.h>
double P = 3.1415926;
int main()
{float area,perimeter,x;
printf("请输入圆的半径。");
scanf("%f",&x);
float criclearea(float x);
area = criclearea(x);
float cricleperimeter(float x);
perimeter = cricleperimeter(x);
    printf("圆的周长为：%f\n",perimeter);
	printf("圆的面积为：%f\n",area);
}
float criclearea(float x)
{
	float area = 0;
	area = (P*x*x);
	return area;
}
float cricleperimeter(float x)
{
	float perimeter = 0;
	perimeter = (2*P*x);
	return perimeter;
}
