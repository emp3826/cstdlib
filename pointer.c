#include <stdio.h>

void increment1(int p)
{
	p = p + 1;
}
void increment2(int *p)
{
	*p = *p + 1;
}
int increment3(int p)
{
	p++;
	return p;
}
int main()
{
	int a = 1;
	int b = 1;
	int c = 1;
	increment1(a);
	increment2(&b);
	c = increment(c);
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
}
