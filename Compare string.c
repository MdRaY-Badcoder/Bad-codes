#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define ll long long
#define ull unsigned long long
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))

int main(){

char x[21];
char y[21];

scanf("%s",x);
scanf("%s",y);

int length1=strlen(x);
int length2=strlen(y);

if(length1>length2){
    printf("%s",y);
}else printf("%s",x);

  return 0;
}

