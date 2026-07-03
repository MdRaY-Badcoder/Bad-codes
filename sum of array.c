#include<stdio.h>
#include<conio.h>

int main(){

   int num;
   scanf("%d",&num);
int sum=0;
 while(num!=0){
    int digit =num%10;
    printf("%d",digit);

    num=num/10;
    sum=sum+digit;
 }

printf("\n%d",sum);


return 0;
}

