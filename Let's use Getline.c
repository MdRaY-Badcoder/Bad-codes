#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define ll long long
#define ull unsigned long long
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))

int main(){

char s[1000000];
fgets(s,sizeof(s),stdin);
int L=0;
while(s[L]!='\\' && s[L]!='\0'){
        printf("%c",s[L]);
    L++;
}
  return 0;
}

