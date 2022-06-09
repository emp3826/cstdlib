#include <assert.h>

int main()
{
	static_assert(sizeof(int)==4);
	static_assert(sizeof(int)==5,"warning");
}
