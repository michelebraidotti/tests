#include <stdio.h>

#define MAXLINE 1000

void remove_trailing(char original[], char cleaned[]);
int newgetline(char line[],int maxline);
void newprintline(char l[], int len);

int main() {
	char line[MAXLINE];
	while ( (len = getcleanedline(line, MAXLINE)) > 0 ) {
		newprintline(cleaned, MAXLINE);
	}
}

void newprintline(char l[], int len) {
	int i;
	for (i=0; i < len - 1; ++i) {
		putchar(l[i]);
	}
	putchar('\n');
}

int getcleanedline(char s[],int lim) {
	int c, i;

	for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i) {
		s[i] = c;
	}
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
