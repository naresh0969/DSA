/*every fourth number is sum of its previous three numbers,print the Nth term of given starting three numbers using recursion*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
  int sum=0;
  if(n==3){
    return c ;
  }
  else{
    sum+=a+b+c;
    a=b,b=c,c=sum;
    sum=find_nth_term(n-1,a,b,c);
    return sum;
    
  }
  
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
