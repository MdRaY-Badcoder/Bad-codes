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

printf("%d %d\n",strlen(x),strlen(y));
printf("%s",x);
printf("%s\n",y);
char temp=x[0];
x[0]=y[0];
y[0]=temp;
printf("%s %s\n",x,y);
  return 0;
}

