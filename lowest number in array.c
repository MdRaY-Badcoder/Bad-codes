#include<stdio.h>
#include<conio.h>

int main(){

int n;
scanf("%d",&n);
int i,array[n];
int pos=0;
 int lowest=array[0];

for(i=0;i<n;i++){
    scanf("%d",&array[i]);
}

for(i=0;i<n;i++){
     if(array[i]<lowest){
        lowest=array[i];
        pos=i;
     }
}
printf("%d %d",lowest,pos+1);
return 0;
}

