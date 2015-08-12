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

int main(){
unsigned long long int T,N,i,a[1000100],j,s=500000000000,p=500000000000;
T=scan();
while(T--){
N=scan();
for(i=0;i<N;i++){
a[i]=scan();
if(s>a[i]){
s=a[i];
}
}
for(i=0;i<N;i++)
if(a[i]!=s && p>a[i]){
p=a[i];
}
printf("%llu\n",p+s);
s=500000000000;
p=500000000000;
}
return 0;
}
