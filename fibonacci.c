#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
    int num1 = 0, num2 = 1, n, i, fib;
    scanf("%d", &n);

    if(n>=1)printf("0 ");
    if(n>=2)printf("1 ");
    for(i=0; i<=n-3; i++) {
        fib = num1 + num2;
        num1 = num2;
        num2 = fib;
        printf("%d ",fib);
    }
return 0;
}
