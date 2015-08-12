#include<stdio.h>
#include<string.h>
#include<malloc.h>
struct node{
		char str;
		int occur;
		struct node* next;
	    };
typedef struct node node;
node* occurence_of_char(char *,struct node*);
node* getnode(node *tmp);
void print(node *);

main(){
node *head;
char a[100];
head=NULL;
scanf("%s",a);
head=occurence_of_char(a,head);
print(head);
}

node* occurence_of_char(char *a,struct node* head){
int i,t,j;
t=strlen(a);
node *temp,*k,*s;
for(i=0;i<t;i++){
if(head==NULL && i==0){
head=getnode(head);
head->str=a[0];
//head->occur=1;
for(j=t-1;j>=0;j--){
if(head->str==a[j]){
head->occur=j+1;
break;
}
}
k=head;
s=head;
//printf("%d\n",head->occur);
}else{
int count=0;
while(k!=NULL){
if(a[i]==k->str)
count++;
k=k->next;
}
//printf("%d %c\n",count,a[i]);
if(count==0){
node *temp;
temp=getnode(temp);
temp->str=a[i];
s->next=temp;
temp->occur=i;
for(j=t-1;j>=0;j--){
if(temp->str==a[j]){
temp->occur=j+1;
break;
}
}
s=s->next;
}
k=head;
}



}
return head;
}

node* getnode(node *tmp){
tmp=(node *)malloc(sizeof(node));
tmp->next=NULL;
return tmp;
}

void print(node *head){
node *temp;
temp=head;
while(temp!=NULL){
printf("%c %d\n",temp->str,temp->occur);
temp=temp->next;
}
}
