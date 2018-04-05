#include <stdio.h>
// 1. While
// 2. Nested While
int main()
{
	int a;
	int b;
	a=3;
	while (a < 4) // ICG for while 
	{
		a = a + 1;
		a++;
	}
	b=2;
	while (b > 8){ // ICG for nested while
		b = a*5+21;
		while(a < 40){
			a++;
		}
	}

}
