#include<stdio.h>
double P = 3.1415926;
int main()
{float area,perimeter,x;
printf("������Բ�İ뾶��");
scanf("%f",&x);
float criclearea(float x);
area = criclearea(x);
float cricleperimeter(float x);
perimeter = cricleperimeter(x);
    printf("Բ���ܳ�Ϊ��%f\n",perimeter);
	printf("Բ�����Ϊ��%f\n",area);
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
