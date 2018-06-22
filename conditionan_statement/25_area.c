#include <stdio.h>

int main(void)
{
	int choice, r, l, w, b, h;
	float area;

	printf("Input 1 for circle:\n");
	printf("Input 2 for rectangle:\n");
	printf("Input 3 for triangle:\n");
	printf("Input your choice:\n");
	scanf("%d", &choice);
	switch (choice) {
		case 1:
			printf("Input radious of circle:\n");
			scanf("%d", &r);
			area = 3.14 * r * r;
			break;
		case 2:
			printf("Input length and width of rectangle:\n");
			scanf("%d%d", &l, &w);
			area = l * w;
			break;
		case 3:
			printf("Input the base and height of triangle:\n");
			scanf("%d%d", &b, &h);
			area = 0.5 * b * h;
			break;
	}
	printf("The area is %f\n", area);
	return 0;
}
