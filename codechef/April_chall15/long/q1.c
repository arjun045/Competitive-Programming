#include<stdio.h>
int main(){
int T,k;
long long int count,a[100001],i,N;
scanf("%d",&T);
while(T--){
count=0;
scanf("%lli",&N);
for(i=0;i<N;i++)
scanf("%lli",&a[i]);
k=0;
for(i=0;i<N-1;i++){
if(a[i]!=a[i+1]){
if(k==0){
count=count+2;
k=1;
}else{
count++;
}
}else{
k=0;
}
}
printf("%lli\n",count);
}
return 0;
}
