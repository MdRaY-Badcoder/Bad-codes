#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

 
int main(){
 
    long long num1 = 0, num2 = 1,fib;
    int n;
    scanf("%d",&n);
 
    if(n==1){printf("0\n");
    }
    else if(n==2){printf("1\n");
    }
    else {
    for(int i=0; i< n-2;i++){
        fib = num1 + num2;
        num1 = num2;
        num2 = fib;
    }
     printf("%lld\n",fib);
    }
return 0;
}
