#include<stdio.h>

float division(int x, int y){
float result;
 result = (float)x/y;
return result;
}

int main(){

int x,y;

printf("Enter integers: ");
scanf("%d %d",&x,&y);

printf("result = %.2f",division(x,y));

return 0;
}
