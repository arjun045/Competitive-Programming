#include<stdio.h>
#include<stdlib.h>

long long int r[101],b[101],g[101];
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
int T,i,ind1,ind2,ind3,R,G,B,M,k,l,m,temp;
T=scan();
while(T--){
k=-1,l=-1,m=-1;
ind1=0,ind2=0,ind3=0;
R=scan(),G=scan(),B=scan(),M=scan();
for(i=0;i<R;i++){
scanf("%lli",&r[i]);
if(k<r[i]){
ind1=i;
k=r[i];
}
}
for(i=0;i<G;i++){
scanf("%lli",&g[i]);
if(l<g[i]){
ind2=i;
l=g[i];
}
}

for(i=0;i<B;i++){
scanf("%lli",&b[i]);
if(m<b[i]){
ind3=i;
m=b[i];
}
}

temp=r[ind1];
r[ind1]=r[0];
r[0]=temp;


temp=g[ind2];
g[ind2]=g[0];
g[0]=temp;

temp=b[ind3];
b[ind3]=b[0];
b[0]=temp;

for(i=0;i<M;i++){
if(r[0]>=g[0] && r[0]>=b[0])
r[0]=r[0]>>1;
else if(g[0]>=r[0] && g[0]>=b[0])
g[0]=g[0]>>1;
else if(b[0]>=g[0] && b[0]>=r[0])
b[0]=b[0]>>1;

}
if(r[0]>=g[0] && r[0]>=b[0])
printf("%lli\n",r[0]);
else if(g[0]>=r[0] && g[0]>=b[0])
printf("%lli\n",g[0]);
else if(b[0]>=g[0] && b[0]>=r[0])
printf("%lli\n",b[0]);

}
return 0;
}
