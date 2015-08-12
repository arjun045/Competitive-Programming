#include<stdio.h>
#include<malloc.h>
#include<string.h>

int count=0,s=0,k,z=0,p=0;
unsigned long long int T=0;

inline void print(char g){
char u='0',f='.';
int j;
if(g=='0' && count==1 && g!='.'){
if(s==1){
T++;
}else{
printf("%c",g);
}
}else if(g!='0' && g!='.'){
if(s==1){
if(k==0){
printf("%c",f);
k=1;
}
for(j=0;j<T;j++)
printf("%c",u);
printf("%c",g);
T=0;
p=1;
}else{
printf("%c",g);
z=1;
count=1;
}
}else if(g=='.'){
s=1;
count=1;
k=0;
}
}

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
int n,v,j;
char a[1000005],chr,rel;
unsigned long int t;
unsigned long long int i;
char q[200];
t=scan();
while(t--){
for(j=0;j<200;j++)
q[j]='=';
n=scan();
for(i=0;i<n;i++){
scanf(" %c %c",&chr,&rel);
q[chr]=rel;
}
scanf("%s",a);
for(i=0;i<strlen(a);i++){
if(q[a[i]]!='='){
a[i]=q[a[i]];
}
print(a[i]);
}
if(z==0 && p==0){
printf("0");
}
printf("\n");
count=0,s=0,T=0,z=0,p=0;
}
return 0;
}

