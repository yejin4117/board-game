#include<stdio.h>
#include<stdlib.h>

typedef struct {
	int x;
	int y;
} Point;

void main(void) {
	Point* ptr = (Point*)malloc(sizeof(Point));
	ptr->x = 3;
	ptr->y = 4;

	//포인터를 통한 간접접근
	printf("%d %d \n",(*ptr).x, (*ptr).y);
	printf("%d %d \n", ptr->x,ptr->y);
}