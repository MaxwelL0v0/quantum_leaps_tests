#include <stdio.h>

typedef struct {int x; int y;} Point;

int sum (int x, int y){
	int z = x + y;
	return z;
};

int main (){
	Point initialPoint = {5, 4};
	int resultPoint = sum(initialPoint.x, initialPoint.y);
	printf("The sum of %d and %d is %d.\n", initialPoint.x, initialPoint.y, resultPoint);
	return 0;
}
