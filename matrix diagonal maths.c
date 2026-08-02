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
   for(int i=0;i<n;i++){
        sum1=sum1+array[i][i];
   }
 int sum2=0;
   for(int i=0;i<n;i++){
        sum2=sum2+array[i][n-1-i];

   }
   printf("%d",abs(sum1-sum2));
   return 0;
}
