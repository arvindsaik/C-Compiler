#include <stdio.h>
// 1. While
// 2. Nested While
int main()
{
	int a = 3;
	int b = 2;
	while (a < 4) // ICG for while 
	{
		a = a + 1;
		a++;
	}

	while (b > 8){ // ICG for nested while
		b = a*5+21;
		while(a < 40){
			a++;
		}
	}

}