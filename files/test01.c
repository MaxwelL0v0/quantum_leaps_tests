#include <stdio.h>
#include <stdint.h>

int main () {
	uint8_t a = 5;
	int32_t b = -128;
	float t = 38.5f;
	printf("The value of a is: %d.\nThe value of b is: %d.\nThe value of t is: %.1f.\n", a, b, t);
	return 0;
}
