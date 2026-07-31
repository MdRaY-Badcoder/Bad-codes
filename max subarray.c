#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
int t,n;
scanf("%d",&t);

while(t--){
  scanf("%d",&n);
  int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
   for(int i=0;i<n;i++){
       int max=array[i];
for(int j=i;j<n;j++){
       if(array[j]>max){
         max=array[j];
       }
          printf("%d ",max);
}
   }
   printf("\n");
}
return 0;
}
