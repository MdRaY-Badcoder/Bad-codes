#include<stdio.h>

int main(){

int t,k;
scanf("%d",&t);

while(t--){
    scanf("%d",&k);
    int c;
  int a=0;
  int mx=0;
  int count=0;

for(int i=0;i<k;i++){
    scanf("%d",&c);

    if(c>mx){
    mx=c;
    }
    if(c>=2){
            count++;
    }
  }
if(mx>=3 || count>=2){
    a=1;
}
  if(a==1){
    printf("YES\n");
}
  else{
    printf("NO\n");
}
}
return 0;
}
