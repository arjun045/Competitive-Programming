#include<stdio.h>
#include<string.h>

int main(){
long long int T,count,N,K,i,min,e;
char a[100001],b[100001];
int l,t,temp;
scanf("%lli",&T);
while(T--){
count=0;
scanf("%lli %lli",&N,&K);
scanf("%s",a);
strcpy(b,a);
min=1;
l=a[0]-'0';
if(l==1)
t=0;
else
t=1;
//printf("%d %d\n",l,t);
for(i=1;i<N;i++){
if(min==K && a[i-1]!=a[i]){
min=1;
//printf("a\n");
}else if(min==K && a[i-1]==a[i]){
min=1;
b[i]=(char)t+'0';
temp=l;
l=t;
t=temp;
//printf("%d",t);
count++;
//printf("b\n");
}else if(min<K && a[i-1]!=a[i]){
min=1;
temp=l;
l=t;
t=temp;
//printf("c\n");
}else{
min++;
//printf("d\n");
}
//printf("min is %lli\n",min);
}
printf("%lli\n%s\n",count,b);
}
return 0;
}
