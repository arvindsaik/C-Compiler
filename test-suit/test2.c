#include <stdio.h>

/* 1 ) Test case for identifying function with single argument 
2 ) Test for identifiers and constants supported 
3 ) Test for strings and special symbols supported
*/


/* Test case for identifying function with single argument */
int power2(int c){
    int d = c*c;
    return d;
}
char add1(char c){
    return (c+1);
}
void starter(int a){
    printf("you wanted to print %d",a);
}
int main(){
    /* test for identifiers and constants supported */
    short int sum = 10;
    long int total = 20;
    sum = 10*10 + 20;
    
    /* test for strings and special symbols supported */
    char a[100] = "hello";
    printf("Hello world");

    int ab[2] = {10,20};
    int b = 3;
    b = (10 + b)*2 - 3;

    int res1 = power2(10);
    char res2 = add1('d');
    starter(20);
    return 0;
}