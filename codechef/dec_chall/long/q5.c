#include<stdio.h>
long int e[10001]={0},c[10001]={0},a[10001],b[10001];
long int time=1;
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
/*
void dfs(long int u,long int N){
long int i;
//printf("hy");
a[u]=time;
time=time+1;
for(i=1;i<=N;i++){
//printf("%li %li %li\n",i,g[u][i],u);
if(g[u][i]==1 && a[i]==0){
//printf("%li\n",g[u][i]);
dfs(i,N);
}
}
b[u]=time;
time++;
}*/
long int max(long int a,long int b){
if(a>b) return b;
else return a;
}

int main(){
int r,K,pos,P,l;
long int max1,max2,s,min,N,t,h,min1,k,B,A,j,i,d[10001][100],ca,cb;
N=scan(),K=scan();
B=scan();
for(i=0;i<N-1;i++){
a[i]=scan(),b[i]=scan();
c[i]=99999;
}
c[N]=99999;
c[N-1]=99999;
c[B]=0;
e[B]=B;
for(i=0;i<5;i++){
for(j=0;j<N-1;j++){
cb=c[b[j]];
ca=c[a[j]];
if((cb+1)<ca){
c[a[j]]=cb+1;
e[a[j]]=b[j];
}
if((ca+1)<cb){
c[b[j]]=ca+1;
e[b[j]]=a[j];
}
}
}
max1=1;
long int g[10001]={0};
for(i=1;i<=N;i++){
if(c[i]==1){
g[i]=max1;
max1++;
}
}
for(i=0;i<3;i++){
for(i=1;i<=N;i++){
if(g[i]==0){
g[i]=g[e[i]];
}
}
}
//for(i=1;i<=N;i++){
//printf("%li ",g[i]);
//}
for(i=1;i<=N;i++){
A=scan();
d[A][0]++;
d[A][d[A][0]]=i;
}
pos=scan();
while(pos--){
l=0;
r=0;
t=0;
h=0;
a[t]=0;
b[h]=0;
//max1=-99999;
min=99999;
min1=99999;
max2=-99999;
ca=0,cb=0;
A=scan(),P=scan();

if(d[P][0]==0){
printf("-1\n");
}else{
max1=d[P][1]-c[A];
for(i=1;i<=d[P][0];i++){
if(A==d[P][i]){
r=1;
}else if(g[A]==g[d[P][i]]){
//printf("Entered\n");
l=1;
}

if((c[d[P][i]]-c[A])>0){
ca=1;
if(min1>c[d[P][i]]-c[A]){
min1=c[d[P][i]]-c[A];
cb=d[P][i];
}
}else{
if(max2>c[d[P][i]]-c[A]){
max2=c[d[P][i]]-c[A];
s=d[P][i];
}
}

if(min>d[P][i])
min=d[P][i];
}
}
//printf("%li %li\n",min,max1);
if(r==1 && l==1){
printf("%li\n",c[A]);
}else if(l==1 &&r==0){
if(ca==1){
printf("%li\n",cb);
}else{
printf("%li\n",s);
}
}else
printf("%li\n",min);
}
return 0;
}











