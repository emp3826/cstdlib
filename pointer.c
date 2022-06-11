#include <stdio.h>

void increment1(int p)
{
	p = p + 1;
}
void increment2(int *p)
{
	*p = *p + 1;
}
int main()
{
	int a = 1;
	int b = 1;
	increment1(a);
	increment2(&b);
	printf("%d\n",a);
	printf("%d\n",b);
}
