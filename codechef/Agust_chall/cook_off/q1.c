#include<stdio.h>

inline int scan(){
int t=0;
char c;
c=getchar_unlocked();
while(c<'0' || c>'9')
c=getchar_unlocked();
while(c>='0' && c<='9'){
t=(t<<1) +(t<<3) + c - '0';
c=getchar_unlocked();
}
return t;
}
void swap(unsigned long *a,unsigned long *b){
unsigned long temp;
temp=*a;
*a=*b;
*b=temp;
}
int main(){
int s,b[100001],T;
unsigned long int c,d,i,N,M,a[100001];
T=scan();
while(T--){
s=0;
N=scan(),M=scan();
//printf("%lu %lu\n",N,M);
for(i=1;i<=N;i++){
//printf("%lu\n",i);
a[i]=scan();
if(a[i]==i)
b[i]=1;
else
b[i]=0;
}
printf("hy\n");
for(i=1;i<=M;i++){
c=scan(),d=scan();
if(a[c]==d)
b[d]=1;
if(a[d]==c)
b[c]=1;
swap(&a[c],&a[d]);
}
for(i=1;i<=N;i++){
if(b[i]==0){
s=1;
break;
}
}
if(s==1)
printf("Impossible\n");
else
printf("Possible\n");
}
return 0;
}
