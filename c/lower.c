#include <stdio.h>

#define MAXLINE 1000

int getline2(char line[], int maxline);
void lower(char orig[],char rev[], int len);

int main() 
{
    int len;
    char line[MAXLINE]; 
    while ((len = getline2(line, MAXLINE)) > 0) {
	char low[len];
        lower(line, low, len);
     	printf("%s %s\n", line, low);
    }
    return 0;
}

void lower(char orig[], char low[], int l) {
	int i = 0;
	while (i < l) {
		low[i] = (orig[i] >= 'A' && orig[i] <= 'Z') ? orig[i] + 'a' - 'A' : orig[i];
		i++;
	}
}

int getline2(char s[],int lim) {
    int c, i;
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    s[i++] = '\0';
    return i;
}

