#include<stdio.h>
#include<string.h>

int main() {
int a,b;
scanf("%d %d",&a,&b);

int floor=a/b;
int ceil=(a+b-1)/b;
int round=(2*a+b)/(2*b);

printf("floor %d / %d = %d\n",a,b,floor);
printf("ceil %d / %d = %d\n",a,b,ceil);
printf("round %d / %d = %d\n",a,b,round);
 return 0;
}
