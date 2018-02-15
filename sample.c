
#include <stdio.h>

/*
Unmatched else
*/

int main(){
    int a = 1;
    int b = 2;
    int c;
    
    if( a > 2){
        c = a;
    }
    else{
        c = -a;
    }
    else{
        c = 2a;
    }

    return 0;
}