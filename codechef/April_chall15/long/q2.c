#include<stdio.h>
#include<math.h>

long long int factor(long long int n)
{
long long int k,sum=1,i,sum1,su=1;
if(n==1)
return 1;
else if(n==2)
return 3;
k=sqrt(n);   
    for (i=2;i<=k;i++)
    {
	sum1=1;
su=1;
//printf("%lli ",i);
        while (n%i == 0)
        {
		su=i*su;
            sum1=sum1+su;
            n = n/i;
		//printf("%lli\n",sum1);
	}
	sum=sum*sum1;
    }
 //printf("%lli\n",n);
    if (n > 2)
        sum=sum*(n+1);
return sum;
}

int main(){
long long int T,N;
scanf("%lli",&T);
while(T--){
scanf("%lli",&N);
printf("%lli\n",factor(N));
}
return 0;
}
