#include <stdio.h>

#define MAXLINE 1000

int getline2(char line[], int maxline);
void reverse(char orig[], int start, int end);

int main() 
{
    int len;          
    char line[MAXLINE]; 
    while ((len = getline2(line, MAXLINE)) > 0) {
        reverse(line, 0, len-1);
	line[len] = '\0';
     	printf("%s\n", line);
    }
    return 0;
}

void reverse(char s[], int i, int j) {
	if (i == j)
		return;
	else if ( i > j) 
		return;
	else {
		char tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		reverse (s, ++i, --j);
	}
		 
}

int getline2(char s[],int lim) {
    int c, i;
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    return i;
}
