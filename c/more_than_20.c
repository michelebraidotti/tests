#include <stdio.h>

#define MAXLINE 1000
#define MINLEN 20

int newgetline(char line[], int maxline);
void newprintline(char line[], int len);

int main() {
	int len;
	char line[MAXLINE];

	while ( (len = newgetline(line, MAXLINE)) > 0 ) {
		if (len > MINLEN) 
			newprintline(line, len);
	}
}

void newprintline(char l[], int len) {
	int i;
	for (i=0; i < len - 1; ++i) {
		putchar(l[i]);
	}
	putchar('\n');
}

int newgetline(char s[],int lim) {
	int c, i;

	for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
