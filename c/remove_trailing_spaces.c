#include <stdio.h>

#define MAXLINE 1000

int getcleanedline(char line[], int maxline);

int main() 
{
	int len = 0;
	char line[MAXLINE]; 
	while ( (len = getcleanedline(line, MAXLINE)) > 0 )
		printf("%s", line);
	return 0;
}

int getcleanedline(char s[],int lim)
{
	int c, i;
	for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i) {
		s[i] = c;
	}
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == EOF) && i > 0)
		--i;
	s[i++] = '\n';
	s[i++] = '\0';
	return i;
}

