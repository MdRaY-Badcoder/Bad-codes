#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
int n,q;
scanf("%d %d",&n,&q);
long long array[n+1];
long long prefix[n+1];

prefix[0]=0;

for(int i=1;i<=n;i++){
    scanf("%lld",&array[i]);

    prefix[i]=prefix[i-1]+array[i];
}

while(q--){

    int l,r;
    scanf("%d %d",&l,&r);
    printf("%lld\n",prefix[r]-prefix[l-1]);

}
   return 0;
}

