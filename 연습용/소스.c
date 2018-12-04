#include <stdio.h>

struct tin {
	double yoon;
		double lovely;

};

typedef struct tin ti;

int main() {
	ti a;
	a.yoon = 10;
	a.lovely = 20;
	printf("Loves live a %03f,%03f", a.yoon, a.lovely);


}