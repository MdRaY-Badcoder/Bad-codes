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
int count=0;
int inword=0;
fgets(s,sizeof(s),stdin);

                for(int i=0;s[i]!='\0';i++){
    if((s[i]>='a'&& s[i]<='z')||(s[i]>='A' && s[i]<='Z')){
            if(inword==0){
            count++;
            inword=1;
     }
    }
    else{
        inword=0;
    }
}
printf("%d",count);
  return 0;
}
