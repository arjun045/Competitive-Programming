#include<stdio.h>
main()
{
long long unsigned int a;
int c;
scanf("%llu",&a);
c=a%6;
if(c==0 || c==1 || c==3)
printf("yes");
else
printf("no");
}
