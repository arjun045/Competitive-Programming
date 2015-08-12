#include<stdio.h>
#include<string.h>
int main(){
unsigned long long int N,k,i;
int c[127];
for(i=97;i<123;i++)
c[i]=0;
char a[1000010],b[1000010];
scanf("%llu",&N);
scanf("%s",a);
scanf("%s",b);
k=strlen(b);
for(i=0;i<k-1;i++){
c[b[i]]=k-1-i;
}

return 0;
}

