#include<stdio.h>
#include<math.h>

inline int scan(){
char c;
int t=0;
c=getchar_unlocked();
while(c<'0' && c<'9')
c=getchar_unlocked();
while(c>='0' && c<='9'){
t=(t<<3)+(t<<1)+c-'0';
c=getchar_unlocked();
}
return t;
}

void print(int x){
if(x<0){
putchar_unlocked('-');
x=-x;
}
int len=0,data[10];
while(x){
data[len++]=x%10;
x=x/10;
}
if(!len)
data[len++]=0;
while(len--)
putchar_unlocked(data[len]+48);
putchar_unlocked('\n');
}

int main(){
int N,a,b,count=0,i;
N=scan();
for(i=0;i<N;i++){
a=scan();
b=scan();
while(a!=b){
if(a>b)
a=a>>1;

else
b=b>>1;

count++;
}
print(count);
count=0;
}
return 0;
}

