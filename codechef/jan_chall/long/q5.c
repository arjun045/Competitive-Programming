#include<stdio.h>

long long int cmp(const void *a,const void *b)
{
	return (*(int*)a-*(int*)b);
}


int main(){
long long int T,N,K,s,b[500001],i;
scanf("%lli",&T);
while(T--){
scanf("%lli %lli",&N,&K);
s=(N*(N+1))/2;

if(K>0){
for(i=0;i<K;i++){
scanf("%lli",&b[i]);
s=s-b[i];
}
}

if(K>2)
qsort(b,K,sizeof(long long int),cmp);

if(b[0]==1){
printf("Chef\n");
}else if(b[1]==2){
printf("Mom\n");
}else{
if(s%2==0){
printf("Chef\n");
}else{
printf("Mom\n");
}
}
}
return 0;
}
