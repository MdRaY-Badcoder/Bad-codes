#include<stdio.h>
#include<string.h>

int main() {
int a,b;
scanf("%d %d",&a,&b);

int smallest;
int GCD=1;

 if(a<b){smallest=a;}else{smallest=b;}
 for(int i=1;i<=smallest;i++){
    if( a%i==0 && b%i==0 ){

        GCD=i;
    }
 }

 printf("%d\n",GCD);

 return 0;
}
