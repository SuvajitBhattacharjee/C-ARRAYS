#include<stdio.h>
int freq(int a[],int n,int x)
{
	int i,count=0;
	for(i=0;i<n;i++)
	{
		if(x==a[i])
		{
			count++;
		}
	}
	printf("%d",count);
}
int main()
{
	int x,n,a[10],i,k;
	printf("enter the number of element:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the number");
	scanf("%d",&x);
	k=freq(a,n,x);
}
