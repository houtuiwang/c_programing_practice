#include <stdio.h>

int perimeter(int height, int width)
{
	return 2 * (height + width);
}

int area(int height, int width)
{
	return height * width;
}

int main(void)
{
	int height = 7, width = 5;

	printf("perimeter of the rectangle = %d inches\n", perimeter(height, width));
	printf("Area of the rectangle = %d square inches\n", area(height, width));

	return 0;
}
