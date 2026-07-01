#include<stdio.h>
#include<conio.h>

int main(){


int n;
scanf("%d",&n);

long long array[n];
long long sum=0;

for(int i=0;i<n;i++){

    scanf("%lld",&array[i]);
    sum=sum+array[i];

}

if( sum<0 ){
    sum = -sum;
}

printf("%lld\n",sum);

return 0;

}

