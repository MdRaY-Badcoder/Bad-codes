#include<stdio.h>

int main(){
double N;
scanf("%lf",&N);

int integer =(int)N;

if(N==integer){
    printf("int %d\n",integer);
}
else{

    printf("float %d %.3f\n",integer,N-integer);
}
return 0;
}
