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

long long int gcd(long long int x,long long int y){
long long int t,b,a;
a = x;
b = y;
while (b != 0) {
t = b;
b = a % b;
a = t;
}
return a;
}

int main(){
int T,a[100000],b[100000]={0},N,l;
long long int t,k,i,count;
T=scan();
while(T--){
l=0;
count=0;
k=0;
N=scan();
for(i=0;i<N;i++){
a[i]=scan();
}
for(i=0;i<N-1;i++){
t=gcd(a[i],a[i+1]);

}
}
return 0;
}
