#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define ll long long
#define ull unsigned long long
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))

int main(){

char x[25],y[25];
scanf("%s %s",x,y);

int i=0;
while(x[i]!='\0' && y[i]!='\0'){
        if(x[i]<y[i]){
            printf("%s",x);
            return 0;
        }
        else if(x[i]>y[i]){
printf("%s",y);
         return 0;
        }
        i++;
}
if(x[i]=='\0'){
    printf("%s",x);
}else
printf("%s",y);
  return 0;
}

