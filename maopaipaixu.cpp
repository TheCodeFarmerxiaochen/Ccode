#include<stdio.h>
int main()
{
int n=10,k;

int a[n];
printf("请输入%d个整数。\n",n);
for(int i=0;i<n;i++)//用数组存储20个整数
{	
scanf("%d",&a[i]);
}
for(int i=0;i<n;i++)//对数组a[n]进行冒泡排序。
{
	for(int j=i;j<n;j++){
		if(a[i]>a[j+1]){
		k=a[j+1];
		a[j+1]=a[i];
		a[i]=k;
		continue;
		}
		else continue;
	}	
}
printf("排序后的数组为：");
for(int i=0;i<n;i++)//输出数组a[n].
{


	printf("%d  ",a[i]);
	}
return 0;
}
