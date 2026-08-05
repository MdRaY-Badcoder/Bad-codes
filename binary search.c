#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int compare(const void *a,const void *b)
{
   long long x= *(long long *)a;
   long long y= *(long long*)b;

   if(x>y)
    return 1;
   if(x<y)
    return -1;
return 0;
}

int main(){

int n,q;
scanf("%d %d",&n,&q);
long long array[n];
for(int i=0;i<n;i++){
    scanf("%lld",&array[i]);
}
qsort(array,n,sizeof(long long),compare);

while(q--){
    long long x;
    scanf("%lld",&x);
    int left=0;
    int right=n-1;
    int found=0;
    while(left<=right){
      int mid=left+(right-left)/2;
      if(array[mid]==x){
        found =1;
        break;
      }
      else if(array[mid]<x){
        left = mid+1;
      }
      else
      {
          right = mid-1;
      }
      }
      if(found)
        printf("found\n");
      else
        printf("not found\n");
    
    }
   return 0;
}

