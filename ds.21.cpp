#include<stdio.h>
int main()
{
	int a[15];
	int i,n,j,ele;
	printf("enter number of elements");
	scanf("%d",&n);
	printf("enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		}
		printf("enter a element to delete:");
		scanf("%d",&ele);
		
		for(i=0;i<n;i++)
		{
			if(ele==a[i])
			{
			
		for(j=i;j<n-1;j++)
		{
			a[i]=a[j+1];
		}
		break;
	}
}
		printf("\nafter deletion:");
		for(i=0;i<n;i++)
		{
			printf("%d",a[i]);
		}
}
