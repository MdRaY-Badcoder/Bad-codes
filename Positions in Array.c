#include<stdio.h>
#include<conio.h>

int main(){

int n;
scanf("%d",&n);
int i,array[n];


for(i=0;i<n;i++){
    scanf("%d",&array[i]);

}

for(i=0;i<n;i++){

if(array[i]<=10){

    printf("A[%d] = %d\n",i,array[i]);
}
}

return 0;
}

