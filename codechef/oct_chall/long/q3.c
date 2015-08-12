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
long long int T,a[100004],N,i,t;
T=scan();
while(T--){
t=0;
N=scan();
for(i=0;i<N;i++)
a[i]=scan();
if(a[i]<0)
b[t++]=a[i];
}
for(j=0;j<N;j++){
for(i=0;i<t;i++){
if(a[j]>=0 && a[j]>=b[i]){
b[i]=b[i]+a[j]
}

}
}
return 0;
}
