#include<stdio.h>
int main(){
long long int l,r,i,count,k,N,T,s;
scanf("%lli",&T);
while(T--){
count=0;
scanf("%lli",&N);
 for (i = 1; i <=N- 2; i++)
    {
 
        // To find the other two elements, start two index variables
        // from two corners of the array and move them toward each
        // other
        l = i + 1; // index of the first element in the remaining elements
        r = N; // index of the last element
        while (l < r)
        {
            if( i + l==r)
            {
                count++;
            }
            else if (i + l < r)
                l++;
            else // A[i] + A[l] + A[r] > sum
                r--;
        }
    }
printf("%lli\n",count*2+N%3);
}
return 0;
}
