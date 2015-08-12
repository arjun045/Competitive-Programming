#include<stdio.h>

int main(){
long long int T,i,j,N,H,num1,num2,count,sum;
scanf("%lli",&T);
while(T--){
sum=0;
long int a[1000001]={0};
scanf("%lli %lli",&N,&H);
for(i=1;i<=N;i++){
scanf("%lli %lli",&num1,&num2);
a[num1]++;
if((num2+1)<N)
a[num2+1]--;
}

for(i=1;i<N;i++){
a[i]=a[i]+a[i-1];
}
//for(i=0;i<N;i++){
//printf("%li ",a[i]);
//}
//printf("\n");
for(i=0;i<H;i++){
sum=sum+a[i];
}
count=sum;
for(i=H;i<N;i++){
//printf("%li %li\n",count,sum);
sum=sum+a[i]-a[i-H];
if(count<sum){
count=sum;
}
}
printf("%lli\n",H*N-count);
}
return 0;
}
