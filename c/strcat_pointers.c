#include <stdio.h>

#define MAXLINE 1000

void strcat2(char *out, char *first, char *second);
int strlen2(char *str);

int main() 
{
	char first[] = "first string";
	char second[] = "second string";
	printf("f: %d, s:%d\n", strlen2(first), strlen2(second));
	char res[strlen2(first) + strlen2(second)];
	strcat2(res, first, second);
	printf("%s + %s = %s\n", first, second, res);
	return 0;
}

int strlen2(char *str) {
	int i = 0;
	while (*str++ != '\0') 
		i++;
	return i;
}

void strcat2(char *out, char *first, char *second) {
	while (*first != '\0')
		*out++ = *first++;
	while (*second != '\0')
		*out++ = *second++;
	*out = '\0';
	return;	
}

