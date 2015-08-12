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

main(){
int q;
char a[300003],b[300003];
q=scan();
while(q--){
scanf("%s",a);
if(a[i]=="?"){

}else{

}
}
}
