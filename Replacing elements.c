#include<stdio.h>
#include<conio.h>

int main(){

int n;
scanf("%d",&n);
int i,array[n];


for(i=0;i<n;i++){
    scanf("%d",&array[i]);
if(array[i]>0){

    array[i]=1;
 }
 if(array[i]<0){
    array[i]=2;
 }

}

for(i=0;i<n;i++){

 printf("%d ",array[i]);

}


return 0;
}

