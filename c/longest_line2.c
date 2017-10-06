#include <stdio.h>

int getlinesize();

int main() 
{
	int len = 0;
	int max = 0;
	while ((len = getlinesize()) > 0) {
		//printf("Len: %d\n", len);
		if (len > max)
			max = len;
	}
	printf("Max len: %d\n", max);
}

int getlinesize()
{
    int c, i=0;
    while ( (c=getchar())!=EOF && c!='\n' )
	    ++i;
    return i;
}

