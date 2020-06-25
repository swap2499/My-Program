// Distinct Element in Array
// Input n=5
// 1 2 3 3 2 8
// Output = 1 2 3 8 
#include<stdio.h>
int main()
{
	int a[100],i,j,n;
	printf("\n Enter size of array :-");
	scanf("%d",&n);
	printf("\n Enter array element :-");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
			break;
		}
		if(i==j)
		printf("%d ",a[i]);
	}
	return 0;	
}
