#include<stdio.h>
#include<math.h>

long long int gcd(long long int a,long long int b){
long long int temp; 
while (b > 0)
    {
        temp = b;
        b = a % b; // % is remainder
        a = temp;
    }
    return a;
}
/*
int primeFactors(long long int a,long long int n)
{
int k,i,l,m;
k=0;l=0;m=0;
    while (n%2 == 0)
    {
        if(a%2!=0)
	k=2;
        n = n/2;
    }
 for (i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            if(a%i!=0)
		l=2;
            n = n/i;
        }
    }
 
    if (n > 2){
	if(a%n!=0){
	m=2;
}
}
if(k==2 || l==2 || m==2)
return 0;
else
return 1;
}
*/

int main(){
long long int c=9,A,B,T,k,r;
int l;
scanf("%lli",&T);
while(T--){
l=0;
scanf("%lli %lli",&A,&B);
k=gcd(A,B);
r=B/k;
while(r!=1){
c=gcd(A,r);
if(c==1){
l=1;
break;
}
r=r/c;
}
if(l==0)
printf("Yes\n");
else
printf("No\n");
}
return 0;
}
