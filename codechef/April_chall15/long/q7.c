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

long long int m(long long int a,long long int b){
if(a>b)
return a;
else return b;
}

long long int maxi(long long int a,long long int f,long long int *c){
long long int max,y,l,i,b[100002],t;
if((f-a+1)%2!=0){
c[f+1]=-1;
f=f+1;
}
while(1){
l=0;t=0;			
for(i=a;i<=f;i=i+2){
b[l++]=m(c[i],c[i+1]);
}
if(l==1){
return b[l-1];
}
if((l-1)%2==0){
b[l++]=-1;
}
for(i=0;i<l;i=i+2){
c[t++]=m(b[i],b[i+1]);
}
if(t==1){
return c[t-1];
}
if((t-1)%2==0){
b[t++]=0;
}
a=0;
f=t-1;
}
}
int main(){
long long int N,x,y,M,sum=0,a[100001],i,k,s,c[100002];
scanf("%lli",&N);
for(i=0;i<N;i++){
scanf("%lli",&a[i]);
c[i]=a[i];
}
scanf("%lli %lli %lli",&M,&x,&y);
while(M){
if(x>y){
k=y;
s=x;
}else{
k=x;
s=y;
}
//printf("%lli %lli\n",k,s);
sum=sum+maxi(k,s,c);
//printf("%lli\n",sum);
x=(x+7)%(N-1);
y=(y+11)%N;
//break;
M--;
}
printf("%lli\n",sum);
return 0;
}
