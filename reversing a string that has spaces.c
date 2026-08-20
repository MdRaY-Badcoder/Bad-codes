#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define ll long long
#define ull unsigned long long
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))
int main(){
char s[1000006];
fgets(s,sizeof(s),stdin);
int length=strlen(s);

for(int i=length;i>=0;i--){
    printf("%c",s[i]);
}
  return 0;
}
