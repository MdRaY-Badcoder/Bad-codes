#include<stdio.h>
#include<conio.h>

int main(){

int n;
scanf("%d",&n);
int i,array[n];


for(i=0;i<n;i++){
    scanf("%d",&array[i]);
}

for(i=n-1;i>=0;i--){
printf("%d ",array[i]);
}

return 0;
}

