#include<stdio.h>
#include<malloc.h>
struct node{
		unsigned long long int ct;
		unsigned long long int value;
		struct node *next;
	   };
typedef struct node node;
node* getnode(node *);
node* insert(node *,unsigned long long int *);
void display(node *);

void func1(unsigned long long int *);
node* func2(node *,unsigned long long int *);


unsigned long long int count=0,k=0;
int main(){
unsigned long long int N,i,*x,*y,a,b;
node *head,*t;
scanf("%llu",&N);
for(i=0;i<N;i++){
head=NULL;
int flag=0;
scanf("%llu%llu",&a,&b);
x=&a;y=&b;
if(a==b)
printf("0\n");
else{
if(*x<*y){
head=func2(head,x);
t=head;
//display(head);
while(*y!=1){
//printf("%llu\n",*y);
func1(y);
//printf("%llu\n",*y);
while(head!=NULL){
//printf("%llu %llu\n",head->value,*y);
if(*y==head->value){
printf("%llu\n",head->ct+count);
flag=1;
break;
}
head=head->next;
}
if(flag==1)
break;
else
head=t;
}
}
else{
head=func2(head,y);
//display(head);
t=head;
while(*x!=1){
//printf("%llu\n",*x);
func1(x);
//printf("%llu\n",*x);
while(head!=NULL){
//printf("%llu %llu\n",head->value,*x);
if(*x==head->value){
printf("%llu\n",head->ct+count);
flag=1;
break;
}
head=head->next;
}
if(flag==1)
break;
else
head=t;
}

}
count=0;
k=0;
}
}
return 0;
}
/*while(*y!=1){
func1(x);
func1(y);
if(*x==*y){
printf("%llu\n",count);
break;
}
}
count=0;
}
return 0; 
}*/

void func1(unsigned long long int *s){
if(*s%2==0){
*s=*s/2;
count++;
}else{
*s=(*s-1)/2;
count++;
}
}

node* func2(node *head,unsigned long long int *s){
head=insert(head,s);
while(*s!=1){
//head=insert(head,s);
if(*s%2==0)
*s=*s/2;
else
*s=(*s-1)/2;
head=insert(head,s);
}
return head;
}


node* insert(node *head,unsigned long long int *h){
node *t,*temp;
t=head;
if(head==NULL){
head=getnode(head);
head->value=*h;
t=head;
}else{
while(t->next!=NULL){
t=t->next;
}
temp=getnode(temp);
temp->value=*h;
t->next=temp;
}
return head;
}


node* getnode(node *tmp){
tmp=(node *)malloc(sizeof(node));
tmp->next=NULL;
tmp->ct=k++;
return tmp;
}

void display(node *head){
while(head!=NULL){
printf("%llu %llu\n",head->value,head->ct);
head=head->next;
}
}


