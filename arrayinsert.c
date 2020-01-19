#include<stdio.h>
# define size 20
int main()
{
	int a[size],i,n,item,loc;
	printf("enter the number of elements to be entered:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
	printf("\nenter the item to enter:");
	scanf("%d",&item);
	printf("\nenter the location");
	scanf("%d",&loc);
	for(i=n-1;i>=loc;i--)
	{
		a[i+1]=a[i];
	}
	a[loc]=item;
	printf("array after insertion is :");
	for(i=0;i<=n;i++)
	{
		printf(" %d ",a[i]);
	}
}
