#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define ll long long
#define ull unsigned long long
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))

int main(){

char x[22];
char y[22];

scanf("%s",x);
scanf("%s",y);

if(strcmp(x,y)<0){
    printf("%s",x);
}else printf("%s",y);

  return 0;
}

