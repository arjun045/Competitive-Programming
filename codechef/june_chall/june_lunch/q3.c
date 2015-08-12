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
 
 
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
	int s=0,n,x,y,q,*a,count,temp,i,j;
	scanf("%d %d",&n,&q);
	a=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(i=0;i<n;i++)
			for(j=i+1;j<n;j++)
				if(a[i]>a[j])
					s++;		
	while(q--)
	{
		scanf("%d %d",&x,&y);
		temp=a[x-1];
		a[x-1]=a[y-1];
		a[y-1]=temp;
		count=s-3;
		if(a[x-2]>a[x-1])
		count++;
		if(a[x-1]>a[y-1])
		count++;
		if(a[y-1]>a[y-2])
		count++;		
		if(count%2==1)
			printf("1\n");
		else
			printf("0\n");
}
	return 0;
} 
