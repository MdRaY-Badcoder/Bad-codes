#include<stdio.h>

int main(){
int L1,R1,L2,R2;
scanf("%d %d %d %d",&L1,&R1,&L2,&R2);

int start ,end;
if(L1>L2){

    start=L1;

}else{

start=L2;
}

if (R1<R2){
end=R1;
}else{
end=R2;
}

if(start>end){
    printf("-1");

}else{
printf("%d %d",start,end);
}

return 0;
}
