
#include <stdio.h>

/*
Unmatched else
*/

int main(){
    int a = 1;
    int b = 2;
    int c;
    
    if( a > 2)
        c = a;
    if( b > 3 )
        b = 2;
    else
        c = -a;
    

    return 0;
}