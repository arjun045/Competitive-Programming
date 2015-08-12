#include<stdio.h>
#include<string.h>
int main(){
unsigned long long int k,count,s,i;
int T;
char a[100004];
scanf("%d",&T);
while(T--){
count=0;s=1;
scanf("%s",a);
k=strlen(a);
for(i=0;i<k;i++){
count++;
if(count%2==0){
if(a[i]=='l'){
s=(s*2-1)%1000000007;
}
else{
s=(s*2+1)%1000000007;
}
}else{
if(a[i]=='l'){
s=(s*2)%1000000007;
}
else{
s=((s+1)*2)%1000000007;
}
}
}
printf("%llu\n",s);
}
return 0;
}

