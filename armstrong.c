#include<stdio.h>
//#include<math.h>
int power(int,int);
int main()
{
	int z,n,count=0,r,sum=0;
	printf("\n Enter a number =");
	scanf("%d",&n);
	z=n;
	while(n>0)
	{
		n=n/10;
		count++;
	}
	//printf("%d",count);
	
	while(z>0)
	{
		r=z%10;
		sum=sum+power(r,count);
		z=z/10;
	}
	printf("%d",sum);
	return 0;
}
int power(int a,int b)
{
	int p=1;
	for(b;b>0;b--)
	{
		p=p*a;
	}
	return p;
}
