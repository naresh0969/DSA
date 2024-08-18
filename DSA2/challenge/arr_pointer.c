#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,sum=0;
    scanf("%d",&n);
    int *arr;
    arr = (int *)malloc(n*sizeof(int));
    int i=0;
    while(i<n)
    {
        scanf("%d",&*(arr+i));
        sum += *(arr+i);
        i++;
        

    }
    printf("%d",sum);
    free(arr);
    return 0;
}