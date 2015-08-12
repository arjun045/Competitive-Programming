#include<stdio.h>
#include<malloc.h>

inline void quicksort(long long int *x,long long int first,long long int last){
   long long int pivot,pi,temp,i;

     if(first<last){
         pivot=x[last];
         pi=first;

         for(i=first;i<=last-1;i++){
	     
             if(pivot>=x[i]){
                 temp=x[i];
                  x[i]=x[pi];
                  x[pi]=temp;
			pi++;
             }
         }
         temp=x[last];
         x[last]=x[pi];
         x[pi]=temp;
         quicksort(x,first,pi-1);
         quicksort(x,pi+1,last);

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

int main()
{
    long long int n,d,*l,i,count=0;
    n=scan(),d=scan();
    l=(long long int*)malloc(n*sizeof(long long int));
      long long int m,k;  
m=k=l[0]=scan();
  for(i=1;i<n;++i)
    {
        l[i]=scan();
	if(l[i]>m) 
	m=l[i];
	if(l[i]<k)
	k=l[i];
     }
	if(m-k<=d)
	{
		printf("%lli\n",n>>1);
		return 0;
	}
    //sorting
    quicksort(l,0,n-1);
    for(i=0;i<n-1;i=i+2)
    {
            if(l[i+1]<=d+l[i])
            {
                count++;
            }
            else
            {
                i--;
            }
    }
    printf("%lli\n",count);
    return 0;
} 
