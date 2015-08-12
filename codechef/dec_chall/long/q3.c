/*
Let dp[i][j] := 1 if and only if there exists a subset P of A[1..i] such that F(P) = j, otherwise 0

The first observation is that F(P) can be at most 1023 since any input number is at most 1000.

Initially we set all dp[i][j] := 0.

Next, we set dp[0][0] := 1, since a xor of the empty set is 0.

We iterate over all elements of A from left to right. For each A[i], we iterate over all possible values of the xor function i.e. a range from 0 to 1023 inclusive and update these values as follows:

for i = 1 to N:
    for j = 0 to 1023:
        dp[i][j] = dp[i - 1][j] | dp[i - 1][j ^ a[i]]
The reason for this is that if there exists a subset P of A[1..i - 1] such that F(P) = j then there exists also a subset of A[1..i] such that F(P) = j or if there exists a subset P of A[1..i - 1] such that F(P) = j ^ a[i], then F(P) ^ a[i] = j, so there exists a subset P' of A[1..i] such that F(P') = j

At the end we have dp[n][j] for all 0 <= j <= 1023, and we can return a maximum value of dp[n][j] * (j ^ k) for all j.

Time Complexity:

The time complexity per one testcase is O(N * 1023);
*/

#include<stdio.h>
#include<memory.h>
#include<math.h>
//inline int scan()
//{
//	register int c = getchar_unlocked(),balance=0,max=0;
//	while((c<40 || c>41))
//		c = getchar_unlocked();
//	while(c>39&&c<42)
//	{
//		if(c==40)
//			balance+=1;
//		else
//			balance-=1;
//		max = max>balance?max:balance;
//		c = getchar_unlocked();
//	}
//	return max;
//}
 
int main()
{
 
    int t;
    scanf("%d",&t);
    int dp[2][1<<10];
 
    while(t--)
    {
        memset(dp,0,sizeof(dp));
        int k,n;
        scanf("%d %d",&n,&k);
        dp[0][k]=1;
        int mx=(1<<5)-1;
	//printf("%d\n",mx);        
	int x,i,j;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&x);
            mx=mx>x?mx:x;
	    printf("%d\n",mx);
            for(j=0;j<=mx;j++)
            {
		printf("%d %d dp[%d][%d]->%d dp[%d][%d]->%d dp[%d][%d]->%d\n",i,j,i%2,j,dp[i%2][j],(i+1)%2,j^x,dp[(i+1)%2][j^x],(i+1)%2,j,dp[(i+1)%2][j]);
                dp[i%2][j]=dp[(i+1)%2][j^x]>dp[(i+1)%2][j]?dp[(i+1)%2][j^x]:dp[(i+1)%2][j];
            }
        }
        int ans;
        for(j=0;j<=mx;j++)
        if(dp[n%2][j]==1)
            ans=j;
        printf("%d\n",ans);
    }
    return 0;
}
