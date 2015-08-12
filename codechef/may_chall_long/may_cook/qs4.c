#include<stdio.h>
#include<string.h>
int main(){
int t;
char s[200001];
unsigned long long int f[200000],q,i,j,m,b[200000],n,count=0;
scanf("%d",&t);
while(t--){
scanf("%s",s);
scanf("%llu",&q);
for(i=0;i<q;i++)
scanf("%llu",&f[i]);
m=strlen(s);
for(i=0;i<m;i++){
b[i]=0;
for(j=0;j<m;j++){
if(s[i]==s[j])
b[i]++;
}
}

//printf("%llu %llu\n",m,n);
for(i=0;i<q;i++){
for(j=0;j<m;j++){
if(f[i]==b[j] && f[i]>1){
count=count+b[j];
}
}
if(f[i]==1 && count==0)
printf("%llu\n",(m*(m+1))/2);
else if(count!=0 && f[i]>1)
printf("%llu\n",count/f[i]);
else if(f[i]>1 && count==0)
printf("0\n");
count=0;
}

}
return 0;
}
