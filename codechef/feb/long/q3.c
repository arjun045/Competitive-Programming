#include<stdio.h>
int main(){
int T;
long long int k,n,s,count;
scanf("%d",&T);
while(T--){
count=1;
scanf("%lli %lli",&n,&s);
k=s-n;
while(k>0){
k=k-count;
count++;
}
if(k<0)
printf("%lli\n",n-count+1);
else
printf("%lli\n",n-count);
}
return 0;
}
