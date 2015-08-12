#include<stdio.h>
int main(){
int T,N,M,K,i,s;
long int count,count1;
scanf("%d",&T);
while(T--){
count=0,count1=0;
int a[101]={0};
scanf("%d %d %d",&N,&M,&K);
for(i=0;i<M;i++){
scanf("%d",&s);
a[s]=1;
}
for(i=0;i<K;i++){
scanf("%d",&s);
a[s]=a[s]+1;
}
for(i=1;i<=N;i++){
if(a[i]==0){
count1++;
}else if(a[i]==2){
count++;
}
}
printf("%li %li\n",count,count1);
}
return 0;
}
