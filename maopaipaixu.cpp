#include<stdio.h>
int main()
{
int n=10,k;

int a[n];
printf("������%d��������\n",n);
for(int i=0;i<n;i++)//������洢20������
{	
scanf("%d",&a[i]);
}
for(int i=0;i<n;i++)//������a[n]����ð������
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
printf("����������Ϊ��");
for(int i=0;i<n;i++)//�������a[n].
{


	printf("%d  ",a[i]);
	}
return 0;
}
