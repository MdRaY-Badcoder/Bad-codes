#include<stdio.h>
#include<conio.h>

int fact(int n){

    int res=1;
    for(int i=1;i<=n;i++){
    res =res*i;
    }
return res;
}

int main(){
    
   int n;
   scanf("%d",&n);
printf("%d",fact(n));

return 0;
}

