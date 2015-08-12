#include<stdio.h>

int main(){
char s[102];
long long int T,sum,count,i,N,n;
scanf("%lli",&T);
while(T--){
sum=0,count=0;
scanf("%s",s);
scanf("%lli",&n);
//N=srtlen(s);
i=0;
while(s[i]!='\0'){
if(s[i]=='T')
count=count+2;
else
count++;
i++;
}
i=1;
while(12*n-count*i>=0){
sum=sum+12*n-count*i;
i++;
}
printf("%lli\n",sum);
}
return 0;
}
