#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
   int n;
   scanf("%d",&n);

   int array[100][100];

   for(int i=0;i<n;i++){
   for(int j=0;j<n;j++){
     scanf("%d",&array[i][j]);
     }
   }
   int sum1=0;
   int sum2=0;
   for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          if(i==j){
            sum1=sum1+array[i][j];
          }
          if(i+j==n-1){
            sum2=sum2+array[i][j];
          }
        }
   }

   printf("%d",abs(sum1-sum2));
   return 0;
}
