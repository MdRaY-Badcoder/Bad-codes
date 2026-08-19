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

int v[26]={0};

for(int i=0;i<n;i++){
    char c;
    scanf(" %c",&c);
    v[c-'a']++;
}
for(int i=0;i<26;i++){
    for(int j=0;j<v[i];j++){
        char c=i+'a';
        printf("%c",c);
    }
}
  return 0;
}
