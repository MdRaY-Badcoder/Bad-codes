#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define ll long long
#define ull unsigned long long
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))

int ispalin(char x[],int length){
         for(int i=0;i<length/2;i++){
            if(x[i]!=x[length-1-i]){
            return 0;
            }
         }
         return 1;
}
int main(){
char x[1005];
scanf("%s",x);
/*  rayhan */
int length=strlen(x);

if(ispalin(x,length)==1){
    printf("YES");

}
else
{
printf("NO");
}

  return 0;
}

