#include <stdio.h>

/* 1 ) Test for identifying int and char data types and their corresponding sub-types
like short , long , signed, unsigned.
2 ) Test for identifying while and nested while constructs  */

int comp(int a)
{

}

int main(){
    /* test for various integer types supported */
    short int var1;
    long int var2;
    long long int var3;
    int var4;
    signed short int var5;
    signed long int var6;
    signed long int var7;
    signed int var8;
    short int var5;
    char *a = "jgjgh";
    printf("\ndone\n");
    unsigned long int var6;
    unsigned long long int var7;
    unsigned int var8;

    /* test for various character types supported */
    char var9;
    signed char var10;
    signed char var11;

    /* test for while and nested while */
    var1 = 0;
    while(var1 < 20){
        var2 = 0;
        while(var2 < 40){
            var3 = 0;
            var2 = var2 + 1;
        }
        var1 = var1 + 1;
    }

    var1 = 0;
    while(var1 < 20){
        var2 = 0;
        var1 = var1 + 1;
    }

    return 0;
}
