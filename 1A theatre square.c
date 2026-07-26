#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
long long n,m,a;
scanf("%lld %lld %lld",&n,&m,&a);


long long product1=(n+a-1)/a;
long long product2=(m+a-1)/a;

    printf("%lld",product1*product2);

return 0;
}
