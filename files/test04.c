#include <stdio.h>

typedef struct {int x; int y;} Point;

int main (){
	Point point_a = {10, 15};
	printf("Point a = (%d, %d).\n", point_a.x, point_a.y);
	return 0;
}
