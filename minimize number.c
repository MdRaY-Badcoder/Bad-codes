#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(){
 int n;
  scanf("%d",&n);
   int array[n];
int min=100;

  for(int i=0;i<n;i++){
    scanf("%d",&array[i]);

 int count=0;

    while(array[i]%2==0){
      array[i]/=2;
      count++;
     }
     if(count<min){
        min=count;
     }
    }
printf("%d\n",min);

return 0;
}
