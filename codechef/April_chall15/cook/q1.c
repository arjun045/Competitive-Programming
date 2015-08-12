#include<stdio.h>
inline int scan(){
char c;
int t=0;
c=getchar_unlocked();
while(c<'0' || c>'9')
c=getchar_unlocked();
while(c>='0' && c<='9'){
t=(t<<1)+(t<<3) + c -'0';
c=getchar_unlocked();
}
return t;
}

int main(){
long long int N,T,a[50001],sum,i;
scanf("%lli",&T);
while(T--){
sum=0;
scanf("%lli",&N);
for(i=0;i<N;i++){
scanf("%lli",&a[i]);
sum=sum+a[i];
}
sum=sum/(N-1);
printf("%lli",sum-a[0]);
for(i=1;i<N;i++)
printf(" %lli",sum-a[i]);
printf("\n");
}
return 0;
}
