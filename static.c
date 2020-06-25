// Use of static keyword
#include<stdio.h>
void func()
{
	int a=1;
	static int b=1;
	a++;
	b++;
	printf("a=%d\n",a);
	printf("b=%d\n\n",b);
}
main()
{
	func();
	func();
	func();
	func();
}
