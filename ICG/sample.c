#include <stdio.h>
// 1. Nested if else

int main()
{
    int a;
    int b;
    if (a < 10)
    {
        a++;
        if (b < 2)
        {
            b++;
        }
        else
        {
            b--;
        }
    }
    else
    {
        a--;
    }
}
