#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define ll long long
#define ull unsigned long long
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))

int main(){
int n,k;
scanf("%d %d",&n,&k);
for(int i=1;i<=k;i++){
   if(n%10==0){
    n=n/10;
    }
 else{
    n--;
 }
}
printf("%d",n);
  return 0;
}

