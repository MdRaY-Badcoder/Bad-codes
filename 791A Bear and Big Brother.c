#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define ll long long
#define ull unsigned long long
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))

int main(){

int limak,bob;
scanf("%d %d",&limak,&bob);
int count=0;
for(int i=0;i<bob;i++){
if(limak<=bob){
    limak=limak*3;
    bob=bob*2;
    count++;
 }
}
printf("%d",count);

   return 0;
}

