#include  <stdio.h>
/*  count  digits,  white  space,  others  */
int main() 
{
	int  c, i, j, nwhite, nother, nmax;
        int  ndigit[10];
        nwhite  =  nother  =  0;
        for  (i  =  0;  i  <  10;  ++i)
                ndigit[i]  =  0;
        while  ((c  =  getchar())  !=  EOF)
                if  (c  >=  '0'  &&  c  <=  '9')
                        ++ndigit[c-'0'];
                else  if  (c  ==  ' '  ||  c  ==  '\n'  ||  c  ==  '\t')
                        ++nwhite;
                else
                        ++nother;
        printf("digits =\n");
	nmax = ndigit[0];
	for  (i  =  1;  i  <  10;  ++i) {
		if (ndigit[i] > nmax) 
			nmax = ndigit[i];
	}
	for (j = nmax; j > 0; --j) {
		printf("%d ", j);
		for (i  =  0;  i  <  10;  ++i) {
			if ( j > ndigit[i] )
				printf(" ");
			else 
				printf("X");
		}
		printf("\n");
	}
	printf("  ");
        for  (i  =  0;  i  <  10;  ++i) 
		printf("%d", i);
        printf(",  white  space  =  %d,  other  =  %d\n", nwhite,  nother);
}
