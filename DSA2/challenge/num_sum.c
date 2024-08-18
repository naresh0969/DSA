#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int and=0,or=0,xor=0;
  for (int a=1;a<=k;a++) {
      for(int b=a+1;(b>a)&&(b<=n);b++){
          
          if(((a&b)>and) && ((a&b)<k)){
              and=a&b;
          }
          if(((a|b)>or) && ((a|b)<k)){
              or=a^b;
          }
          if(((a^b)>xor) && ((a^b)<k)){
              xor=a^b;
          }
      }
  }
  printf("%d\n",and);
  printf("%d\n",or);
  printf("%d\n",xor);
  
}

