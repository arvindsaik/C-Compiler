#include <stdio.h>

/* No errors just testing if-else, if-else ladder */

int d = 3;
int main(){
   int a = 1;
   int b = 2;
   int c = 3;
   int max;
   if(a >= b){
       int ask = 0;
       if(a >= c){
           max = a;
       }
       else{
	   int aws;
           max = c;
           ask = 0;
       }
       ask = 3;
   }
   else{
       //ask = 2;
       if(b >= c){
           max = b;
       }
       else{
           max = c;
       }
   }

   if(max > 2){
       printf("Good! \n");
   }
   d = 3;
   return 0;
}
