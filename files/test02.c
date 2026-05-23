#include <stdio.h>

int main (){
	int N = 8;
	for (int n = 0; n < N; n++){
		if (n % 2 == 0){
			printf ("%d\n", n);
		}
	}
	return 0;
}
