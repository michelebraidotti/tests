#include <stdio.h>

#define LOWER -20
#define UPPER 300
#define STEP 10

float convert_from_f_to_c(int farh);

int main() {
	int farh;
	for (farh = LOWER; farh <= UPPER; farh = farh + STEP) {
		printf("%3d %6.1f\n", farh, convert_from_f_to_c(farh));
	}
}
float convert_from_f_to_c(int farh) {
	return (5.0/9.0)*(farh-32);
}
