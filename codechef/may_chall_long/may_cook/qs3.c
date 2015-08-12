#include<stdio.h>
#include<math.h>
#include<malloc.h>
struct node{
		int info;
		struct node* next;	
	   };
typedef struct node node;
node *getnode(node *);
node *insert(node *,int);
int value(node *);

int main(){
unsigned long long int t,x,n,b;
int i,s,key,value;
node *head;
scanf("%llu",&t);

while(t--){
int z=10;
scanf("%llu",&n);
head=NULL;
for(i=1;i<=17;i++){
if(n/pow(10,i)<=1)
break;
}
s=i;
x=n;
for(i=0;i<s;i++){
key=x%10;
head=insert(head,key);
x=x/10;
}
value=count(head);
if(value%2==0){
value=value/2;
z=z/2;
}
if(value%5==0){
value=value/5;
z=z/5;
}
printf("%d/%d\n",value,z);
}
return 0;
}

node* getnode(node *temp){
temp=(node *)malloc(sizeof(node));
temp->next=NULL;
return temp;
}

node *insert(node *head,int key){
node *temp,*c,*h;
int count=0;
if(head==NULL){
head=getnode(head);
head->info=key;
c=head;
h=head;
}else{
temp=getnode(temp);
while(c!=NULL){
if(key==c->info)
count++;
c=c->next;
}
c=head;
if(count==0){
h->next=temp;
temp->info=key;
h=h->next;
}
}
return head;
}

int count(node *head){
node *temp;
int value=0;
temp=head;
while(temp!=NULL){
value++;
temp=temp->next;
}
return value;
}

