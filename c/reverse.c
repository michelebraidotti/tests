#include <stdio.h>

#define MAXLINE 1000

int getline2(char line[], int maxline);
void reverse(char orig[],char rev[], int len);

int main() 
{
    int len;          
    char line[MAXLINE]; 
    while ((len = getline2(line, MAXLINE)) > 0) {
	char rev[len];
        reverse(line, rev, len);
	line[len] = '\0';
	rev[len] = '\0';
     	printf("%s %s\n", line, rev);
    }
    return 0;
}

void reverse(char o[], char r[], int l) {
	int i, j;
	i = 0;
	j = l - 1;
	while (i < l)
		r[j--] = o[i++];
}

int getline2(char s[],int lim) {
    int c, i;
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    return i;
}

