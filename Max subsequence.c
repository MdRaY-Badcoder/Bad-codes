#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define ll long long
#define ull unsigned long long
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))
int main(){
int n;
scanf("%d",&n);
char s[n+1];
scanf("%s",s);
int count=1;
for(int i=0;i<n-1;i++){
      if(s[i]!=s[i+1]){
      count++;
      }
}
    printf("%d",count);

  return 0;
}

