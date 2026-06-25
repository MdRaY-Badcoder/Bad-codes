#include<stdio.h>

int main(){
int N;
scanf("%d" ,&N);
long long max= -1, a;

for(int i=0;i<N;i++){
    scanf("%lld",&a);
    if(a>max)max=a;
}
printf("%lld\n",max);
}
