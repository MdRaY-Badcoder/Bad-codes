#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define ll long long
#define ull unsigned long long
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))

int main(){
long long x;
scanf("%lld",&x);
int result;

if(x%5==0){
    result=x/5;
    printf("%d",result);
}
else
    printf("%d",result+1);

   return 0;
}

