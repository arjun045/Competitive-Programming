#include<stdio.h>
#include<math.h>
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

 long long int power(int a){
 long long int k=1,i;
for(i=0;i<a;i++){
k=k*2;
}

return k;
}
 long long int PowerSet( long long int *set, long long int set_size, long long int k)
{
    /*set_size of power set of a set with set_size
      n is (2**n -1)*/
//printf("%d\n",set_size);
	long long int b[25],t,i;
     long long int pow_set_size = power(set_size);
     long long int counter, j,sum,count=0;
 
    /*Run from counter 000..0 to 111..1*/
    for(counter = 0; counter < pow_set_size; counter++)
    {
	sum=0;
	t=0;
      for(j = 0; j < set_size; j++)
       {
          /* Check if jth bit in the counter is set
             If set then pront jth element from set */
          if(counter & (1<<j)){
            sum=sum+set[j];
//		printf("%llu ",set[j]);
		b[t++]=j;
	}
       }
       if(sum==k){
	count++;
	for(i=0;i<t;i++){
		set[b[i]]=0;	
	}
	}
//	printf("\n");
    }
for(i=0;i<set_size;i++){
if(set[i]!=0){
return 0;
}
}
return count;
}

int main(){
int s;
long long int T,k,N,i;
 long long int a[25],sum,l;
T=scan();
while(T--){
sum=0;
s=0;
N=scan(),k=scan();
for(i=0;i<N;i++){
scanf("%lli",&a[i]);
sum=sum+a[i];
}
if(k==1){
printf("yes\n");
}else{
if(sum%k==0){
sum=sum/k;
l=PowerSet(a,N,sum);
//printf("%llu\n",l);
if(l==k)
printf("yes\n");
else
printf("no\n");
}else{
printf("no\n");
}
}
}
return 0;
}
