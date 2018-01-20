#include <stdio.h>

/* 1 ) Test for '{' not terminated
2 ) Test for unterminated character constant 
3 ) Test for invalid functions
*/

int func1(int a) //Valid function
{
    return 0;
}

void func2(int a, float int b) //Valid Function
{
    int var1;
}

void func3(int a int b) //Invalid Function
{
    int var2;
}

void func4(short int a, b) //Invalid Function
{
    int var3
}

int main(){
   
   char a = 'a;
   {
       int var5;
       {
           int var4;
       }

    return 0;

}

/*
    this comment does 
    not end 