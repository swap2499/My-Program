#include<stdio.h>
void swap(int,int);
void main()
{
	int a,b;
	printf("\n Enter two  numbers =");
	scanf("%d%d",&a,&b);
	printf("\n Before swapping in main=%d %d",a,b);
	swap(a,b);
	printf("\n After swapping in main=%d %d\n\n",a,b); 
}
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("\n After swapping in Swap function=%d %d",a,b);
}
