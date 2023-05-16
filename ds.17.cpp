#include<stdio.h>
int main()
{
	int a[50],i,n,search,flag=0;
	printf("enter the number of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	
			printf("enter the %d num",i);
			scanf("%d",&a[i]);
		}
			printf("enter the number to be search:");
			scanf("%d",&search);
			for(i=0;i<n;i++)
			{
				if(search==a[i])
				{
					printf("%d is %d element",search,i);
					flag=1;
				}
			}
			if(flag==0)
			{
				printf("number is not available");
			}
		
}
