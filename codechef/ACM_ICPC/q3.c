#include<stdio.h>
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
/*


int cmp(const void *a,const void *b)
{
	return (*(int*)a-*(int*)b);
}
write this in main
qsort(a,n,sizeof(long long),cmp);

*/

/*
long long int gcd(long long int a,long long int b){
long long int x,y,t;
x=a;
y=b;
while(x){
	t = x;
	x = y%x;
	y = t;
	}
return y;
}
*/


int main(){
int i,num;
long int sum=0,k;
for(i=1;i<=250;i++){
num=i;
while(num){
k=num%10;
num=num/10;
sum=sum+k;
}
}
printf("%li\n",sum);
return 0;
}
