#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int isprime(int num){
if(num<2)
    return 0;
for(int i=2;i*i<=num;i++){

    if(num%i==0)
   return 0;
}
return 1;
}


int main(){
int n;
scanf("%d",&n);
int count=0;
int num=2;
while(count<n){
    if(isprime(num)){
        count++;
    }
    if(count==n){
        break;
        }

        num++;

}
printf("%d\n",num);

return 0;
}
