#include<stdio.h>

float Sp_surfaceArea(int a,float r,const float Pi){

    return a*(r*r)*Pi;
}

int main(){

    float r;
 scanf("%f",&r);

printf("result = %f\n",Sp_surfaceArea(4,r,3.1416));

return 0;
}
