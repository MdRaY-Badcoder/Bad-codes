#include<stdio.h>
#include<string.h>

int main() {
int num[9]={2,4,3,0,1,0,4,1,2};
int sum=0;
for(int i=0;i<=8;i++){

sum = sum + num[i];
}
printf("%d",sum);
 return 0;
}
