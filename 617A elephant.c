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
result=x/5;
if(x%5==0){
    printf("%d",result);
}
else
    printf("%d",result+1);

   return 0;
}

