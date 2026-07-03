#include<stdio.h>
#include<string.h>
int main() {
int n;
scanf("%d",&n);
int i=1;
int count=0;
while(i<=n){

    if(n%i==0){
        count++;
    }
    i++;
}
if(count==2)
    printf("YES");
else
printf("NO");
 return 0;
}
