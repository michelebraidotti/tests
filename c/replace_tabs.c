#include <stdio.h>

#define MAXLINE 1000
#define NOFSPACES 3

int getline2(char line[], int maxline);
int counttabs(char line[], int lenght);
void replace_tabs(char orig[],char repl[], int len);

int main() 
{
	int len;          
	char line[MAXLINE];
	while ((len = getline2(line, MAXLINE)) > 0) {
		int ntabs = counttabs(line, len);
		int repllen = len+((NOFSPACES-1)*ntabs);
		printf("len: %d, ntabs: %d, repllen:%d\n", len, ntabs, repllen);
		char repl[repllen];
		replace_tabs(line, repl, len);
		line[len] = '\0';
		repl[repllen] = '\0';
		printf("%s\n%s\n", line, repl);
	}
	return 0;
}

void replace_tabs(char o[], char r[], int l) {
	int i, j, k;
	i = 0;
	j = 0;
	while (i < l) {
		if ( o[i] == '\t') {
			for (k=0; k < NOFSPACES; ++k) 
				r[j++] = ' ';
			i++;
		}
		else
			r[j++] = o[i++];
	}
}

int counttabs(char s[], int lim) {
	int i, notabs=0;
	for (i=0; i < lim-1; ++i)
		if (s[i] == '\t')
			notabs++;
	return notabs;

}

int getline2(char s[], int lim) {
	int c, i;
	for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
	return i;
}

