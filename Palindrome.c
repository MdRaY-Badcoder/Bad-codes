#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define ll long long
#define ull unsigned long long
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))


int main(){
char s[20];
scanf("%s",s);
int length=strlen(s);
int found=0;
for(int i=0;i<length/2;i++){
    if(s[i]!=s[length-1-i]){
       found=1;
       break;
    }
}
if(found==1){
    printf("NO\n");
}else
printf("YES\n");
 return 0;
 }
