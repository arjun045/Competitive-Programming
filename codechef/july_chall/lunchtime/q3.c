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
unsigned long long int N,a[400000],i,j,x;
long long int count=0;
N=scan();
for(i=0;i<N;i++)
a[i]=scan();
for(i=0;i<N-1;i++){
for(j=i+1;j<N;j++){
x=(a[i]&a[j]);
if(count<x)
count=x;
}
}
printf("%lli\n",count);
return 0;
}
