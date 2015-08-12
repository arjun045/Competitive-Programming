#include<stdio.h>
#include<string.h>

inline long int min2(long int a,long int b){
//printf("%li %li\n",a,b);
if(a>b)return b;
else return a;
}

inline long int min3(long int a,long int b,long int c){
//printf("%li %li %li\n",a,b,c);
if(a>b)return min2(b,c);
else return min2(a,c);
}

inline long int min4(long int a,long int b,long int c,long int d){
//printf("%li %li %li %li\n",a,b,c,d);
if(a>b)return min3(b,c,d);
else return min3(a,c,d);
}

int main(){
int j;
char s[100002];
long int d[100002],val[10],i,p;
scanf("%s",s);
p=strlen(s);

for(i=0;i<p+2;i++)
d[i]=99999;

for(i=0;i<10;i++)
val[i]=99999;

val[s[0]-'0']=0;
d[0]=0;

for(j=0;j<10;j++){
for(i=1;i<p;i++){
d[i]=min4(d[i],d[i-1]+1,d[i+1]+1,val[s[i]-'0']+1);
//printf("%li\n",d[i]);
val[s[i]-'0']=min2(val[s[i]-'0'],d[i]);
//printf("%li\n",d[i]);
}
}
printf("%li\n",d[p-1]);
return 0;
}
