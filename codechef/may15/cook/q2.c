#include <stdlib.h>
#include <stdio.h>
#include <string.h> 
int main()
{
	int r;
    char s[100001],k,l;
 long long int m,t,i,f,j,y;
    scanf("%lli",&t);
    while(t--)
    {
	r=0;	
	k='0';
	f=0;
	y=0;
	int b[200]={0};
	scanf("%s",s);
m=strlen(s);
for(i=0;i<m;i++){
b[s[i]]++;
}
if(m==1)
printf("%s\n",s);
else if(m==2){
if(s[0]==s[1])
printf("-1\n");
else
printf("%s\n",s);
}else{
b[s[0]]--;
for(i=1;i<m;i++){
if(s[i]==s[i-1]){
for(j=97;j<=122;j++){
f=1;
if(b[j]>0 && s[i]!=(char)j){
s[i]=(char)j;
f=2;
break;
}
}
}
b[s[i]]--;
if(f==1){
printf("-1\n");
break;
}
}
if(f!=1)
printf("%s\n",s);
}
}
return 0;
}
