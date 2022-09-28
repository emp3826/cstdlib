#include <assert.h>

int main()
{
	int i = 3;
	assert(i>=3);
	assert(i>4);
	static_assert(sizeof(int) == 4);
	static_assert(sizeof(int) == 5, "warning");
}
