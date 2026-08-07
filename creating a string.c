#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define ll long long
#define ull unsigned long long
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))
 
int main(){
 
char s[1000],t[1000];
scanf("%s",&s);
scanf("%s",&t);
int length1=0;
int length2=0;
 
while(s[length1]!='\0')
     length1++;
     while(t[length2]!='\0')
        length2++;
     printf("%d %d\n",length1,length2);
  printf("%s %s\n",s,t);
  return 0;
}
