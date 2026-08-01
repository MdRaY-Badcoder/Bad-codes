#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
  int n;
  scanf("%d",&n);
  int array[n];

  for(int i=0;i<n;i++){
    scanf("%d",&array[i]);
  }
  int min=0;
  int max=0;
  for(int i=1;i<n;i++){
    if(array[i]<array[min]){
        min=i;
        }
        if(array[i]>array[max])
            max=i;
      }
       int temp=array[min];
      array[min]=array[max];
      array[max]=temp;

  for(int i=0;i<n;i++){
    printf("%d ",array[i]);
  }

return 0;
}

