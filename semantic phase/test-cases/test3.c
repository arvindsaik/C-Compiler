#include <stdio.h>

int sum(int a, float b)
{
  return a + b;
}

int func1(float a, float c)
{
	return 3;
}
int main()
{
	int a;
	float b;

  a = sum(2.5, 3);
  b = func1(2, 2.5);
}
