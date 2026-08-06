#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define ll long long
#define ull unsigned long long
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))

int main(){
long long k,n,w;
scanf("%lld %lld %lld",&k,&n,&w);
int result=0;
for(int i=1;i<=w;i++){
         result=result+(i*k);
}
if(result>n){
    printf("%d\n",result-n);
}
else {
  printf("0\n");
}
   return 0;
}

