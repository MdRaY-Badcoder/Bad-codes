#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define ll long long
#define ull unsigned long long
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))
int main(){
    char s[10005];
    char t[]="hello";
    scanf("%s",s);
    int j=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]==t[j]){
        j++;
        }
if(j==5){
    printf("YES");
    return 0;
}
    }
    printf("NO");
  return 0;
}

