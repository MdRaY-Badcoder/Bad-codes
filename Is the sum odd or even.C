#include<stdio.h>
#include<conio.h>

int main(){

   int n;
   scanf("%d",&n);
   int sum=0;

for(int i=1;i<=n;i++){
    sum=sum+i;

}

printf("%d\n",sum);

if(sum%2==0)
printf("EVEN");
    else
        printf("ODD");


return 0;
}

