#include<stdio.h>

int main(){

int N,M;
while(scanf("%d %d", &N,&M) !=EOF){
    if(N<=0 || M<=0)
    break;
    int start,end;
    if(N<M){
        start =N;
        end=M;
    }
    int sum=0;
    for(int i=start;i<=end;i++){
        printf("%d ",i);
    sum+=i;
    }
    printf("sum =%d\n",sum);
}
return 0;
}
