
#include<stdio.h>
long int g[10001][10001];
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

void DFS(int i)
{
    int j;
    printf("\n%d",i);
    visited[i]=1;
    for(j=0;j<n;j++)
        if(!visited[j]&&g[i][j]==1)
            DFS(j);
}

int main(){
long int N,K,B;
N=scan(),K=scan();
B=scan();
for(i=0;i<N-1;i++){
m=scan(),n=scan();
g[m][n]=1;
g[n][m]=1;
}
return 0;
}
