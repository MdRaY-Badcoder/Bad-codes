#include<stdio.h>

int main(){

int A,B,C;
scanf("%d %d %d",&A,&B,&C);
int max=A;
int min=A;

if(B<min){
min =B;

}
if(C<min){
min =C;

}
if(B>max){
max =B;

}
if(C>max){
max =C;

}
int mid=A+B+C-max-min;

printf("%d\n%d\n%d\n\n",min,mid,max);
printf("%d\n%d\n%d\n",A,B,C);

return 0;
}
