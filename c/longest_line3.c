#include <stdio.h>

#define MAXLINE 1000    /* maximum input line size */

int max;                /* maximum length seen so far */
char line[MAXLINE];     /* current input line */
char longest[MAXLINE];  /* longest line saved here */

int getline2(void);
void copy(void);

int main()
{
	int len;
	max = 0;
	while ((len = getline2()) > 0)
		if (len > max) {
			max = len;
		copy();
		}
	if (max > 0) 
		printf("%s", longest);
	return 0;
}

int getline2(void)
{
	int c, i;
	for (i = 0; i < MAXLINE - 1 && (c=getchar()) != EOF && c != '\n'; ++i)
		line[i] = c;
	if (c == '\n') {
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}

void copy(void)
{
	int i;
	i = 0;
	while ((longest[i] = line[i]) != '\0')
		++i;
}
