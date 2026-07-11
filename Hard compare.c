#include<stdio.h>

int main(){

long long A,B,C,D;
 
scanf("%lld %lld %lld %lld",&A,&B,&C,&D);

double left =B*log(A);
double right =D*log(C);


if(left>right)
printf("YES");
    else
    printf("NO");

return 0;
}
