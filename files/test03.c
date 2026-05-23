#include <stdio.h>

int main (){
	int a = 15;
	int *p = &a;
	printf("The value of a is: %d.\nThe value of pointer p is HEX: %04X.\n", a, p);
	printf("The saved value in p is: %d", *p);
	return 0;
}
