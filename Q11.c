#include <stdio.h>
#include <math.h>
struct circle {
	double radius;
	double x;
	double y;
};
int contain(struct circle *c1, struct circle *c2);
int main16()
{
	struct circle c1, c2;
	printf("Enter circle 1 (radius x y): ");
	scanf("%lf %lf %lf", &c1.radius, &c1.x, &c1.y);
	printf("Enter circle 2 (radius x y): ");
	scanf("%lf %lf %lf", &c2.radius, &c2.x, &c2.y);
	printf("contain(): %d\n", contain(&c1, &c2));
	return 0;
}
int contain(struct circle *c1, struct circle *c2) {
	double b, c,d;
	
	b = c1 ->x - c2 -> x;
	c = c1 ->y - c2 -> y;
	d = (sqrt((b*b) + (c*c)));
	
	if ((c1->radius) >= (c2->radius + d)) {
		return 1;
	}
	else return 0;

}