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

long long int a[100003][2];

inline void quicksort(long long int first,long long int last){
   long long int pivot,pi,temp,i;

     if(first<last){
         pivot=a[last][0];
         pi=first;

         for(i=first;i<=last-1;i++){
	     
             if(pivot>=a[i][0]){
                 temp=a[i][0];
                  a[i][0]=a[pi][0];
                  a[pi][0]=temp;
		temp=a[i][1];
		a[i][1]=a[pi][1];
		a[pi][1]=temp;
			pi++;
		
             }
         }
         temp=a[last][0];
         a[last][0]=a[pi][0];
         a[pi][0]=temp;
	temp=a[last][1];
	a[last][1]=a[pi][1];
	a[pi][1]=temp;
         quicksort(first,pi-1);
         quicksort(pi+1,last);

    }
}

int main(){;
long long int N,K,P,i,t=0,c[100003],A,B;
N=scan(),K=scan(),P=scan();
for(i=0;i<N;i++){
a[i][0]=scan();
a[i][1]=i;
}
quicksort(0,N-1);

for(i=0;i<N-1;i++){
if(a[i][0]+K>=a[i+1][0]){
c[a[i][1]]=t;
c[a[i+1][1]]=t;
}else{
t++;
c[a[i+1][1]]=t;
}
}
while(P--){
A=scan(),B=scan();
if(c[A-1]==c[B-1])
printf("Yes\n");
else
printf("No\n");
}
return 0;
}
