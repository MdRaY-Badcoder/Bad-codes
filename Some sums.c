#include <stdio.h>
int main() {

int N,A,B;
scanf("%d %d %d",&N,&A,&B);
int sum=0;
for(int i=1;i<=N;i++){
  int temp=i;
  int digitsum=0;


  while(temp>0){

   digitsum+=temp%10;
   temp/=10;
  }

  if(digitsum>=A&& digitsum<=B){
    sum+=i;
  }
}
printf("%d\n",sum);
    return 0;
}
