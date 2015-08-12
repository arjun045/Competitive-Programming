#include<stdio.h>
#include<string.h>

inline int scan(){
int t=0;
char c;
c=getchar_unlocked();
while(c<'0' || c>'9')
c=getchar_unlocked();
while(c>='0' && c<='9'){
t=(t<<1) +(t<<3) + c - '0';
c=getchar_unlocked();
}
return t;
}


int main(){
int n,t,f;
char a[1000005],chr,rel;
long long int i=0;
long long int j,k,s;
char q[200];
t=scan();
while(t--){
for(j=0;j<127;j++)
q[j]='=';
n=scan();
for(i=0;i<n;i++){
scanf(" %c %c",&chr,&rel);
q[chr]=rel;
}
scanf("%s",a);
s=strlen(a)-1;


for(i=0;i<s+1;i++){
if(q[a[i]]!='='){
a[i]=q[a[i]];
}
if(a[i]=='.')
f=1;
}


for(i=0;i<s+1;i++){
if(a[i]!='0'){
break;
}
}


if(f==1){
for(j=s;j>=0;j--){
if(a[j]!='0'){
s=j;
break;
}
}
if(a[j]=='.')
s--;
}


if(i>s){
printf("0");
printf("\n");
}else{
for(k=i;k<=s;k++)
printf("%c",a[k]);
printf("\n");
}
f=0;
}


return 0;
}
