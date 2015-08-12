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
int T,q;
long int i,t,N,M,v,j,r,count;
T=scan();
while(T--){
long int b[401]={0},c[401]={0},d[401][401]={{0}},a[401]={0},e[201]={0};

t=0;
N=scan(),M=scan();
count=0;
for(i=1;i<=M;i++){
b[i]=scan();
c[b[i]]++;
d[b[i]][c[b[i]]]=i;
}

for(i=1;i<=M;i++){
for(j=1;j<=N;j++)
printf("%li ",e[j]);
printf("\n");
q=0;
long int l=0,k;
if(t<N){
if(a[b[i]]==0){
a[b[i]]=1;
e[++t]=b[i];
}
}else{

if(a[b[i]]!=1){

count++;
for(j=1;j<=N;j++){
if(c[e[j]]==1 || d[e[j]][c[e[j]]]<i){
q=1;
r=j;
break;
}else{
for(k=1;k<c[e[j]];k++){
if(d[e[j]][k]<i && l<d[e[j]][k+1]){
l=d[e[j]][k+1];
v=j;
}else if(d[e[j]][k]>i)
break;
}
}
}
if(q==1){
a[e[r]]=0;
e[r]=b[i];
}else{
a[e[v]]=0;
e[v]=b[i];
}
a[b[i]]=1;
}
}

}
printf("%li\n",t+count);
}
return 0;
}
