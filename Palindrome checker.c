#include<stdio.h>
#include<string.h>
int main(){

int a,original, reversed=0;
scanf("%d",&a);
original=a;
while (a>0){
    int digit =a%10;
    reversed=reversed*10+digit;
    a/=10;
}
printf("%d\n",reversed);
if(original==reversed)
    printf("YES");
else
    printf("NO");
return 0;
}
