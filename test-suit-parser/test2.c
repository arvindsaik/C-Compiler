/*
1 ) Parsing while looping construct
2 ) Parsing nested while looping constructs
*/

#include <stdio.h>

int main(){

   int a = 0;
   int b = 2;
   int c = 5;

 
   //While construct

   while(a<3)
   {
       b = b+c;
       a += 1;
   }

   //Nested while

   a=3;
   b=5;

   while(a>0)
   {
       while(b>0)
       {
           a -= 1;
           b = b-a;
       }
   }

   return 0;
}
