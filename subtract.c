#include<stdio.h>

int subtract(int a,int b, int c){

    return (a-b)-c;
}

int main(){

    int a,b,c;
 scanf("%d %d %d",&a,&b,&c);

printf("result = %d\n",subtract(a,b,c));

return 0;
}
