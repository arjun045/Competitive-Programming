#include<stdio.h>
#include<string.h>

long long int min(long long int a,long long int b){
if(a>b) return b;
else return a;
}

int main(){
int T;
long long int n,i,count;
char a[100001];
scanf("%d",&T);
while(T--){
count=0;
scanf("%s",a);
n=strlen(a);

for(i=0;i<n;i=i+2){
if(a[i]!='-'){
count++;
//printf("a");
}
if(a[i+1] && a[i+1]!='+'){
count++;
//printf("b->\n");
}
//printf("%lli %lli\n",i,count);
}

printf("%lli\n",min(count,n-count));
}
return 0;
}
