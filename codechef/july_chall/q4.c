#include<stdio.h>
#include<malloc.h>

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

unsigned long long int gcd(unsigned long long int a,unsigned long long int b){
unsigned long long int m,i;
if(a>b){
for(i=1;;i++){
if((i*a)%b==0)
return (i*a)%1000000007;
}
}else{
for(i=1;;i++){
if((i*b)%a==0)
return (i*b)%1000000007;
}
}
}

main(){
int T,p=0;
unsigned long long int r,i,N,a[100004],count=0,s,k;
T=scan();
while(T--){
N=scan();
for(i=1;i<=N;i++){
a[i]=scan();
}
s=a[1];
for(i=1;i<=N;i++){
if(s<a[i]){
s=a[i];
count++;
}else{
count++;
}
if(a[i]=i)
r++;
//printf("%lli %lli %lli\n",s,i,count);
if(s==i){
r=0;
//sprintf("%lli\n",count);
if(p==0){
k=count-r;
p=1;
}else{
//printf("%lli %lli",k,count);
k=gcd(k,count);
}
count=0;
if(i+1<=N)
s=a[i+1];
}
}
printf("%llu\n",k);
}
return 0;
}
