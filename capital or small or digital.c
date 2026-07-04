#include<stdio.h>
#include<string.h>

int main() {


char A;
scanf("%c",&A);

if(A >='0' && A<= '9'){

  printf("IS DIGIT");
}
else{
printf("ALPHA\n");
if(A>= 'A' && A<= 'Z'){
    printf("IS CAPITAL");
}
if(A>= 'a' && A<= 'z'){
    printf("IS SMALL");
}
}

 return 0;
}
