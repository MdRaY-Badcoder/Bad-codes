#include<stdio.h>
#include<conio.h>

int main(){
int n;
scanf("%d",&n);
int array[n];
int i,sum=0,A;
int found=0;
for(i=0;i<n;i++){

    scanf("%d",&array[i]);

}
scanf("%d",&A);
for(i=0;i<n;i++){
if(array[i]==A){
    printf("%d\n",i);
    found=1;
    break;
}
}
if(found==0){
    printf("-1");

}

return 0;
}

