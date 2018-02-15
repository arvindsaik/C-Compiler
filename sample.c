
#include <stdio.h>

/*
Unmatched else
*/

int main(){
    int a_c = 1E-2;
    int b = 2;
    int c;
    
    if( a > 2){
        c = a;
    }
    else if(a=3){
        c = -a;
    }
    else{
        c = 2;
    }

    return 0;
}