#include<stdio.h>

long long int b[100002],c[100002];
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
 
long long int gcd(long long int a,long long int b){
long long int t;
while(b!=0){
t=b;
b=a%b;
a=t;
}
return a;
}

int main(){
int s=0;
long long int l,e,f,j,Q,k,N,i,T,a[100001],sum;
T=scan();
while(T--){
N=scan(),Q=scan();
for(i=1;i<=N;i++)
a[i]=scan();
b[0]=0;
b[1]=a[1];
for(i=2;i<=N;i++)
b[i]=gcd(b[i-1],a[i]);
c[N+1]=0;
c[N]=a[N];

for(i=N-1;i>=0;i--)
c[i]=gcd(c[i+1],a[i]);

for(j=1;j<=Q;j++){
scanf("%lli %lli",&e,&f);
printf("%lli\n",gcd(b[e-1],c[f+1]));
}


}
return 0;
} 
