#include<stdio.h>
int binomialCoeff(long long int n,long long int k)
{
long long int res = 1,i;
if ( k > n - k )
 k = n - k;
for (i =0; i < k; ++i)
{
res *= (n - i);
res /= (i + 1);
}
return res%1000003;
}


int main(){
int T;
long long int n,s,N,L,R;
scanf("%d",&T);
while(T--){
scanf("%lli %lli %lli",&N,&L,&R);
n=R-L+1;
s=binomialCoeff(N+n,n);
printf("%lli\n",s-1);
}
return 0;

