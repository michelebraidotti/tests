#include <stdio.h>
#include <string.h>

void copyhex(char to[], char from[]);
int pwr(int base, int exp);
int convertdigit(char hexd);

int main(int argc, char *argv[])
{
	if (argc == 1) 
		return 0;
	int len = strlen(argv[1]);
	char hexstring[len];
	copyhex(hexstring, argv[1]);
	printf("Hex: %s, ", hexstring);
	int i = 0;
	int res = 0;
	while ( i < len ) {
		int digit = convertdigit(hexstring[len - (i+1)]);
		if (digit == -1) 
			return -1;
		res = res + digit*(pwr(16,i));
		i++;
	}
	printf("Dec: %d\n", hexstring, res);
	return 0;
}

void copyhex(char to[], char from[])
{
	int i,j;
	i = 0;
	j = 0;
	if ( from[0] == '0' && (from[1] == 'x' || from[1] == 'X' )) 
		i += 2;
	while ((to[j] = from[i]) != '\0') {
		++j;
		++i;
	}
}

int pwr(int base, int exp) 
{
	int i, res = 1;
	for (i=0; i<exp; i++) {
		res = res*base;
	}
	return res;
}

int convertdigit(char hexd) {
	if (hexd >= '0' && hexd <= '9') 
		return hexd - '0';
	else if (hexd == 'A' || hexd == 'a')
		return 10;
	else if (hexd == 'B' || hexd == 'b')
		return 11;
	else if (hexd == 'C' || hexd == 'c')
		return 12;
	else if (hexd == 'D' || hexd == 'd')
		return 13;
	else if (hexd == 'E' || hexd == 'e')
		return 14;
	else if (hexd == 'F' || hexd == 'f')
		return 15;
	else 
		return -1;
}
