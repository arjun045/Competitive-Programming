#include<stdio.h>
#include<string.h>

void areAnagram(char *str1, char *str2)
{
    // Create a count array and initialize all values as 0
    long int count[200] = {0};
    long int i;
 
    // For each character in input strings, increment count in
    // the corresponding count array
    for (i = 0; str1[i] && str2[i];  i++)
    {
        count[str1[i]]++;
        count[str2[i]]--;
    }
 
    // If both strings are of different length. Removing this condition
    // will make the program fail for strings like "aaca" and "aca"
    if (str1[i] || str2[i]){
	printf("NO\n");
      return ;
	}
 
    // See if there is any non-zero value in count array
    for (i = 97; i < 123; i++)
        if (count[i]){
            printf("NO\n");
		return ;
	}
     printf("YES\n");
}
int main(){
int T,k;
long int i,n;
char a[50001],b[50001];
scanf("%d",&T);
while(T--){
k=0;
long int c[200]={0};
scanf("%s",a);
scanf("%s",b);
n=strlen(a);
areAnagram(a,b);
}
return 0;
}
