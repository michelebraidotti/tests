#include <stdio.h>

int can_you_return();

int s = 0;

int main() 
{
	int r = can_you_return();
	printf("can_you_return returns: %d\n", r);
	printf("Global var 's' is : %d\n", s);
	return 0;
}

int can_you_return() {
	return 1;
	// you can do whatever you want after 'retur'
	// c won't mind and you shound not mind either :)
	s += 7;
}


