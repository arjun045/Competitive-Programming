#include<stdio.h>
main(){
unsigned long long int t,n,m;
int a[3];
scanf("%llu",&t);
while(t--){
scanf("%llu",&n);
if(360%n==0){
a[0]=121;
}
else{
a[0]=110;
}
if(n>360){
a[1]=110;
}
else{
a[1]=121;
}
if((n*(n+1))/2<=360)
a[2]=121;
else
a[2]=110;
printf("%c %c %c\n",a[0],a[1],a[2]);
}
}
