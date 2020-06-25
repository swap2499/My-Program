#include<stdio.h>
int main()
{
	int k,i,j,n,coef;
	printf("\n Enter a no. =");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(k=1;k<=n-i;k++)
		printf(" ");
		for(j=0;j<=i;j++)
		{
			if(i==0 || j==0)
			{
				coef=1;
			}
			else
			{
				coef=coef*(i-j+1)/j;
			}
			printf("%d ",coef);
		}
		printf("\n");
	}
	return 0;
}
