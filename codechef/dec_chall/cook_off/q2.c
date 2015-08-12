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
int n,m,a[50][50]={0},i,j,c,k;
long long int sum=0;
n=scan(),m=scan();
for(i=1;i<=n;i++){
for(j=1;j<=m;j++){
a[i][j]=scan();
}
}

for(i=1;i<=n;i++){
c=a[i][1];
for(j=2;j<=m;j++){
//printf("%d %d %d %d\n",a[i][j],a[i-1][j+1],a[i+1][j+1],a[i][j+1]);
c=(c*a[i][j])%10000007;
//printf("%lli\n",sum);
}
sum=(sum+c)%10000007;
}
for(i=1;i<=n-m+1;i++){
c=a[i][1];
k=i+1;
for(j=2;j<=m;j++){
//printf("%d %d %d %d\n",a[i][j],a[i-1][j+1],a[i+1][j+1],a[i][j+1]);
c=(c*a[k++][j])%10000007;
//printf("%lli\n",sum);
}
sum=(sum+c)%10000007;
}
for(i=n-m+1;i<=n;i++){
c=a[i][1];
k=i-1;
for(j=2;j<=m;j++){
//printf("%d %d %d %d\n",a[i][j],a[i-1][j+1],a[i+1][j+1],a[i][j+1]);
c=(c*a[k--][j])%10000007;
//printf("%lli\n",sum);
}
sum=(sum+c)%10000007;
}

printf("%lli\n",sum);
return 0;
}
