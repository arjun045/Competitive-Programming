#include<stdio.h>
#include<string.h>

int main(){
long int T,k,i,n,s,count,t,count1;
char l1[200001],l2[200001];
scanf("%li",&T);
while(T--){
count=0,count1=0,t=0,s=0;
k=-1;
scanf("%s",l1);
scanf("%s",l2);
n=strlen(l1);

if(l1[0]=='.' && l2[0]=='.'){
k=0;
}else if(l1[0]=='.'){
k=1;
}else if(l2[0]=='.'){
k=2;
}

//printf("k is %li\n",k);
if(l1[0]=='#' && l2[0]=='#'){
	printf("No\n");
}else{
	if(k==0){
		k=1;
		for(i=0;i<n-1;i++){
		if(l1[i+1]=='.' && k==1){
			k=1;
		}else if(l2[i+1]=='.' && k==2){
			k=2;
		}else if(l1[i+1]=='.' && k==2){
			count++;
			k=1;
		}else if(l2[i+1]=='.' && k==1){
			count++;
			k=2;
		}else if(l1[i+1]=='#' && l2[i+1]=='#'){
			count=10000000;
			s=1;
			break;
		}
		}
	k=2;
	for(i=0;i<n-1;i++){
		if(l1[i+1]=='.' && k==1){
			k=1;
		}else if(l2[i+1]=='.' && k==2){
			k=2;
		}else if(l1[i+1]=='.' && k==2){
			count1++;
			k=1;
		}else if(l2[i+1]=='.' && k==1){
			count1++;
			k=2;
		}else if(l1[i+1]=='#' && l2[i+1]=='#'){
			t=1;
			count1=10000000;
			break;
		}
	}
//printf("%li %li\n",count,count1);
if(s==1 && t==1){
printf("No\n");
}else if(count>=count1){
printf("Yes\n%li\n",count1);
}else{
printf("Yes\n%li\n",count);
}

}else{
	if(k==1){
		for(i=0;i<n-1;i++){
			if(l1[i+1]=='.' && k==1){
				k=1;
			}else if(l2[i+1]=='.' && k==2){
				k=2;
			}else if(l1[i+1]=='.' && k==2){
				count++;
				k=1;
			}else if(l2[i+1]=='.' && k==1){
				count++;
				k=2;
			}else if(l1[i+1]=='#' && l2[i+1]=='#'){
				s=1;
				break;
			}
		}
	if(s==0){
		printf("Yes\n%li\n",count);
	}else{
		printf("No\n");
	}
	}else{

		for(i=0;i<n-1;i++){
//			printf("%c %c %li\n",l1[i+1],l2[i+1],k);
			if(l1[i+1]=='.' && k==1){
				k=1;
			}else if(l2[i+1]=='.' && k==2){
				k=2;
			}else if(l1[i+1]=='.' && k==2){
				count++;
				k=1;
			}else if(l2[i+1]=='.' && k==1){
				count++;
				k=2;
			}else if(l1[i+1]=='#' && l2[i+1]=='#'){
				s=1;
				break;
			}
		}
	if(s==0){
		printf("Yes\n%li\n",count);
	}else{
		printf("No\n");
	}

	}
}
}

}
return 0;
}
