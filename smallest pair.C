#include<stdio.h>
#include<limits.h>
int main(){

int t;
scanf("%d",&t);
int n;

for(int i=0;i<t;i++){

        scanf("%d",&n);
int array[n];
    for(int j=0;j<n;j++){
        scanf("%d",&array[j]);
    }

    int ans =INT_MAX;
    for(int x=0;x<n-1;x++){
        for(int y=x+1;y<n;y++){
            int sum=array[x]+array[y]+(y-x);
            if(sum<ans)
                ans =sum;
        }
    }
    printf("%d\n",ans);
}


return 0;
}
