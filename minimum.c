#include<stdio.h>


int minimum(int a,int b){

if(a<b){
    return a;
}
else {
    return b;
}
}

int main(){

int a,b;

scanf("%d %d",&a,&b);

printf("minimum = %d",minimum(a,b));

return 0;
}
