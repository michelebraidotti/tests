#include <stdio.h>

void test();

int extvar;

int main() 
{
	int intvar;
	printf("int %d, ext %d\n", intvar, extvar);
	test();
	return 0;
}

void test() {
	// automatic variables are not initialized to 0 by default!
	int intvar;
	printf("intvar in function test: %d\n", intvar);
}
