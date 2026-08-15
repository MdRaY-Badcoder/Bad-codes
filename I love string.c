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

while(n--){
        char s[51];
char t[51];
    scanf("%s %s",s,t);
    int len1=strlen(s);
    int len2=strlen(t);
 int maxlength;
 if(len1>len2){
  maxlength=len1;
 }   else
 maxlength=len2;
 for(int i=0;i<maxlength;i++){
    if(i<len1)
    printf("%c",s[i]);

   if(i<len2)
    printf("%c",t[i]);
 }
 printf("\n");
}
  return 0;
}

