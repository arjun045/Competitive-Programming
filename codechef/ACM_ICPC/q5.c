#i#include<stdio.h>

unsigned long long int pows(int f)
{
int i=0,j=1;
for(i=0;i<f;i++)
{
j=j*10;
}
return j;
}

unsigned long long int removes(unsigned long long int a)
{
unsigned long long int num=0;
int d,i=0;
while(a!=0)
{
d=a%10;
if(d!=0)
{
num=num+ pows(i)*d;
i++;
}
a=a/10;
}
//printf("%llu ",num);
return num;
}



int main()
{
int t;
unsigned long long int x,y,z;
scanf("%d",&t);
while(t--)
{

scanf("%llu",&x);
scanf("%llu",&y);
z=x+y;
x=removes(x);
y=removes(y);

if(x+y==removes(z))
{
printf("YES\n");
}
else
{
printf("NO\n");
}
}
return 0;
}

