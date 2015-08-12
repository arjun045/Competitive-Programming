#include<stdio.h>
int main(){
int T,N;
long long int i,a,b,x,y,u[100000],v[100000];
scanf("%d",&T);
for(i=0;i<T;i++){
scanf("%d %lli %lli",&N,&a,&b);
}
for(i=0;i<N;i++){
scanf("%lli %lli",&x,&y);
u[i]=a*x+b*y;
v[i]=a*x+b*y;
}
//sort(u) and sort(v)
return 0;
}
