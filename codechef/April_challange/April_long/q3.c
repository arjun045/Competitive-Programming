#include<stdio.h>
#include<malloc.h>
/*void print(int x){
if(x<0){
putchar_unlocked('-');
x=-x;
}
int data[10000];
unsigned long int len=0;
while(x){
data[len++]=x%10;
x=x/10;
}

if(!len)

data[len++]=0;

while(len--)

putchar_unlocked(data[len]+48);

putchar_unlocked('\n');

}*/

inline int scan(){
char c;
int t=0;
c=getchar_unlocked();
while(c<'0' || c>'9')
c=getchar_unlocked();
while(c>='0' && c<='9'){
t=(t<<1)+(t<<3) + c -'0';
c=getchar_unlocked();
}
return t;
}



int main(){
unsigned long long int n,m;
int c,b[10][10]={{0,1,2,3,4,5,6,7,8,9},
		 {1,0,1,2,3,4,5,6,7,8},
	         {2,1,0,1,2,3,4,5,6,7},
	         {3,2,1,0,1,2,3,4,5,6},
	         {4,3,2,1,0,1,2,3,4,5},
	         {5,4,3,2,1,0,1,2,3,4},
	         {6,5,4,3,2,1,0,1,2,3},
	         {7,6,5,4,3,2,1,0,1,2},
	         {8,7,6,5,4,3,2,1,0,1},
	         {9,8,7,6,5,4,3,2,1,0}};
long long int i,j,l,sum=0;
char *a;
n=scan(),m=scan();
a=(char *)malloc(sizeof(char)*(n+1));
scanf("%s",a);
for(i=0;i<m;i++){
l=scan();
c=a[l-1]-'0';
//printf("%d ",c);
for(j=1;j<l;j++){
sum=sum+b[c][a[j-1]-'0'];
//printf("%llu ",sum);
}
printf("%lli\n",sum);
sum=0;
}
return 0;
}


