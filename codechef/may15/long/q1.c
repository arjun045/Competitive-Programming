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
int T,k;
long long int N,a[100001],i,sum,smallest,l;
T=scan();
while(T--){
k=0;
sum=0;
smallest=99999;
N=scan();
for(i=0;i<N;i++){
a[i]=scan();
if(smallest>a[i]){
smallest=a[i];
l=i;
}
}
for(i=0;i<N;i++){
if(a[i]<2){
k=1;
break;
}else if(i!=l){
sum=sum+a[i];
}
}
if(k==1){
printf("-1\n");
}else{
printf("%lli\n",sum+2);
}
}
return 0;
}
