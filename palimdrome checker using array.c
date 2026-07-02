#include<stdio.h>
#include<string.h>

int main(){

int n;
scanf("%d",&n);

int i,array[n];
int palindrome=1;
for(i=0;i<n;i++){

scanf("%d",&array[i]);

}

for(i=0;i<=n/2;i++){


if(array[i]!=array[n-1-i]){

palindrome=0;
break;
}
}
if(palindrome==1){
 printf("YES");
}else{
 printf("NO");
}


return 0;
}
