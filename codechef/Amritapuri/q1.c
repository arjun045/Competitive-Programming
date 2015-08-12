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

int main(){
long int T,i,ds,dt,d;
double s;
T=scan();
while(T--){
s=0;
ds=scan(),dt=scan(),d=scan();
if(ds+dt>d && ds+d>dt && dt+d>ds){
printf("%lf\n",s);
}else{
	if(d>=ds+dt){
		s=d-ds-dt;
		//printf("a\n");
	}else{
		if(ds>dt){
			//printf("b\n");
			s=d+dt-ds;
			if(s<0)
				s=s*-1;
		}else{
			//printf("c\n");
			s=d+ds-dt;
			if(s<0)
				s=s*-1;
		}
	}
printf("%lf\n",s);
}
}
return 0;
}
