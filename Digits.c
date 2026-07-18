#include<stdio.h>
 
int main(){
 
int N,t;
scanf("%d",&t);
 
while(t--){
 
        scanf("%d",&N);
   if(N==0){
    printf("0\n");
continue;
   }
while(N>0){
    printf("%d ",N%10);
  N/=10;
}
printf("\n");
}
return 0;
}
