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
//a[i]=scan();
int main(){
int T;
long long int a[100001],i,f,max,N,K;
T=scan();
while(T--){
scanf("%lli %lli",&N,&K);
for(i=0;i<N;i++){
scanf("%lli",&f);
a[i]=K/f;
}
scanf("%lli",&f);
max=a[0]*f;
for(i=1;i<N;i++){
scanf("%lli",&f);
if(max<a[i]*f)
max=a[i]*f;
}
printf("%lli\n",max);
}
return 0;
}
