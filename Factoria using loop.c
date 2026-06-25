#include<stdio.h>

int main(){
int a,b;
scanf("%d",&a);

while(a--){
    scanf("%d",&b);
long long result = 1;

for(int i=1;i<=b;i++){
    result *=i;
}
printf("%lld\n",result);
}
return 0;
}
