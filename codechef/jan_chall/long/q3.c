#include<stdio.h>
int main(){
int T;
long long int count,N,f,i,k,sum;
scanf("%d",&T);
while(T--){
sum=0;
count=0;
scanf("%lli",&N);
for(i=0;i<N;i++){
scanf("%lli",&f);
if(f!=0)
count++;
sum=sum+f;
}
if(sum-100>=0 && sum-100<=count-1){
printf("YES\n");
}else{
printf("NO\n");
}
}
return 0;
}
