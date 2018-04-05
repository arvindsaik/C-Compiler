
#include <stdio.h>
//1. ICG for Expressions
//2. ICG for use of array
//3. ICG for simple IF-ELSE
int main()
{
	int a = 5;
	float b = 3.5;
	char c = 'a';

	b = a + c * 10; // ICG for Expressions

	int arr[3];
	a = arr[2]; // ICG for use of array

	if (a > 10)
	{ //ICG for simple IF-ELSE
		b = 0 + 3*a + 4;
	}
	else
	{
		a = 20;
	}
	b = 4*5+a;
}