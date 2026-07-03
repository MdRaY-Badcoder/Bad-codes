#include<stdio.h>
#include<conio.h>

int isprime(int p){
if(p<=1)return 0;
int flag =1;

for(int i=2;i*i <=p;i++){
if(p%i==0){
    flag=0;
}

}
return flag;
}

int main(){


int n,p;
scanf("%d",&n);

for(int i=1;i<=n;i++){
    int p;
    scanf("%d",&p);
    if(isprime(p)==1){
   printf("YES\n");
}
else{
    printf("NO\n");
}
}


return 0;
}

