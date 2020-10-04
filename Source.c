#include <stdio.h>
#include <math.h>
#include <conio.h>

#define pi 3.14159

int main()
{
	float sudut = 38; // dalam derajat
	
	printf("sin(%f) = %f \n", sin(pi * sudut / 180.0));
	printf("cos(%f) = %f \n", cos(pi * sudut / 180.0));

	_getch();
	return 0;
}