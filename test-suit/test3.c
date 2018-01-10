#include <stdio.h>

/* 1 ) Test case for identifying escape sequences 
2 ) Test for some valid multiline comments 
3 ) Test for pointers
*/

int main(){
    /* Test case for identifying escape sequences */
    printf("testing \t escape \n sequences \n");
    
    /* Test for some valid multiline comments  */
    
    /* Nested /*
    Multiline comm
    ents work */

    /* Test for pointers */
    char c = 'a';
    char * temp = &c;
    return 0;
}