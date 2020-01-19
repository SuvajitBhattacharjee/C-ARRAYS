#include<stdio.h>
int common(int a1[],int n1,int a2[],int n2)
{
	int i,j;
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			if(a1[i]==a2[j])
			printf("the common element is %d",a1[i]);
		}
	}
}
int main()
{
	int a1[10],a2[10],n1,n2,i;
	printf("enter the number of elements for the first array:");
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a1[i]);
	}
	printf("enter the number of elements for the second array:");
	scanf("%d",&n2);
	for(i=0;i<n2;i++)
	{
		scanf("%d",&a2[i]);
	}
	common(a1,n1,a2,n2);
	return 0;	
}
