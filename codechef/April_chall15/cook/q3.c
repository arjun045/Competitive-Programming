#include<stdio.h>

long long int max(long long int a,long long int b){
if(a>b) return a;
else return b;
}

int main(){
int j,k;
long long int T,sum,i,f,g,N;
scanf("%lli",&T);
long long int r,a[200000][2];
while(T--){
sum=0;
scanf("%lli",&N);
scanf("%d %d",&j,&k);
for(i=0;i<N;i++){
scanf("%lli %lli",&a[i][0],&a[i][1]);
}
for(i=0;i<N;i++){
for(r=i+1;r<N;r++){
f=a[i][0]-a[r][0];
g=a[i][1]-a[r][1];
if(f<0)
f=f*-1;
if(g<0)
g=g*-1;
sum=sum+max(j*f,k*g);
}
}
printf("%lli\n",sum);
}
return 0;
}
