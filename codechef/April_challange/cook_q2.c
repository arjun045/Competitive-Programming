#include<stdio.h>
long long int a[101][51];
int main()
{
	int i,j;
	long long int b[60];
	a[0][0] = 1;
	for(i=1;i<=100;i++)
	for(j=0;j<=i;j++)
	{
		if(j==0 || j==i)
		a[i][j] = 1;
		else
		a[i][j] = a[i-1][j] + a[i-1][j-1];
	}
	
	int t,r,c,m=0;
	long long int g,temp=0;
	scanf("%d",&t);
	while(t--)
	{
		m=0;
		scanf("%d %d %lld",&r,&c,&g);
		while(g>0)
		{
			i=c;
			while((a[i][c]<=g)&&(i<=99))
			i++;
			i--;
			b[++m] = a[i][c];
			g-=a[i][c];
			c--;	
		}
		printf("%d\n",m);
		for(i=1;i<=m;i++)
		printf("%lld ",b[i]);
		printf("\n");
	}
	return 0;
}
/*#include<stdio.h>
unsigned long long int a[100];
void fact(int);
main()
{
unsigned long long int t,G,b[100][100],i,j,sum;
int C,R,s;
scanf("%llu",&t);
while(t--){
scanf("%d%d%llu",&R,&C,&G);
fact(R);
sum=a[R]/(a[R-C]*a[C]);

for(i=1;i<=R;i++){
for(j=1;j<=i;j++){
if(i==j)
b[i][j]=1;
else
b[i][j]=a[i]/(a[j]*a[i-j]);
//if(sum<G){
//s=(R-1)/2;
//sum=sum+a[s]/a[C-1]*a[s-C-1];
//}else{

//}
printf("%llu ",b[i][j]);
}
printf("\n");
}



}
}
*/
//printf("%llu\n",sum);
/*for(i=1;i<=R;i++){
for(j=1;j<=i;j++){
if(i==j){
b[i-1][j-1]=1;
}else{
b[i-1][j-1]=a[i]/(a[i-j]*a[j]);
}
}
}
}
}
*/

/*for(i=1;i<C;i++){
for(j=0;j<=i;j++){
printf("%llu ",b[i][j]);
}
}
printf("\n");
}*/



/*void fact(int d){
int i;
a[0]=1;
for(i=1;i<=d;i++){
a[i]=a[i-1]*i;
//printf("%llu ",c[i]);
}
}
*/
