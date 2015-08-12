#include<stdio.h>
inline int read_int()
{
	int ret = 0;
	register int c = getchar_unlocked();
	
	while(c<'0' || c>'9')
		c = getchar_unlocked();
	while(c>='0' && c<='9')
	{
		ret = (ret<<3) + (ret<<1) + c - '0';
		c = getchar_unlocked();
	}
        return ret;
}
main(){
char s[100];
register int t=0;
t=read_int();
string(s);
printf("%d",t);
}


inline void string(char *str){
register char c=0;
register i=0
while(c<33)
c=getchar_unlocked();
while(c!='\n'){
str[i]=c;
c=getchar_unlocked();
i=i+1;
}
str[i]='\0';
}
