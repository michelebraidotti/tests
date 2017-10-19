#include <stdio.h>
#include <string.h>

int strend2(char *s, char *t);

int main(int argc, char *argv[])
{
	if (argc == 1) 
		return 0;
	char *s = argv[1];
	char *t = argv[2];
	//printf("%s %s\n", s, t);
	int res = strend2(s, t);
	printf("%d\n", res);
	
}

int strend2(char *s, char *t) {
	char *sstart = s;
	char *tstart = t;
	while (*++s != '\0')
		;
	while (*++t != '\0')
		;
	printf("s:%c start:%c t:%c tstart:%c\n", *s, *sstart, *t, *tstart);
	while (*s-- == *t-- && s != sstart && t != tstart)
		printf("s:%c, t:%c\n", *s, *t);
	if (t == tstart && *s == *t)
		return 1;
	return 0;
}

