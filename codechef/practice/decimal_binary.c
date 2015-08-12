#include<stdio.h>
main(){
unsigned long long int n,i,x=1;
for(i=0;i<8;i++){
x=2*x;
}
scanf("%llu",&n);
for(i=0;i<9;i++){
if(n & x)
printf("1");
else
printf("0");
x=x>>1;
}
printf("\n");
}
