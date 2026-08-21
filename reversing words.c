#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define ll long long
#define ull unsigned long long
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))
int main(){
    char s[1000005];
    fgets(s,sizeof(s),stdin);
  int length=strlen(s);
int start=0;
for(int i=0;i<=length;i++){
        if(s[i]==' ' || s[i]=='\n' || s[i]=='\0'){
            for(int j=i-1;j>=start;j--){
              printf("%c",s[j]);
            }
            if(s[i]==' '){
                   printf(" ");
             }
             start=i+1;
        }
}
  return 0;
}
