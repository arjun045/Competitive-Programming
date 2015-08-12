#include<stdio.h>
#include<malloc.h>
#include<string.h>
struct node{
		unsigned long long int index;
		struct node *next_adj_edge;
	   };

struct nodetype{
			int value;
			struct node *adj_edge;
			struct nodetype *next;	
	       };
typedef struct node node;
typedef struct nodetype nodetype;

struct levelnode{
			struct levelnode *back;
			unsigned long long int num;
			unsigned long long int level;
			struct levelnode *front; 
		};
typedef struct levelnode levelnode;  

nodetype* getnodetype(nodetype *);
nodetype* insert_edge(nodetype *,int);
void display(nodetype *);
node* getnode(node *);
nodetype* insert_adj_edge(nodetype *,int,unsigned long long int);
levelnode* getlevelnode(levelnode *);
levelnode* insert(levelnode *,unsigned long long int,unsigned long long int);
void bfs(char *,nodetype *,unsigned long long int,int);
nodetype* insert_adj_edge1(nodetype *edges,node *head,unsigned long long int c);


void display1(levelnode *head){
while(head!=NULL){
printf("%llu %llu\n",head->num,head->level);
head=head->front;
}
}

void display2(levelnode *head){
while(head!=NULL){
printf("%llu %llu\n",head->num,head->level);
head=head->back;
}
}


int main(){
unsigned long long int m,i=0,b[10],level,s;
char a[100005];
int k;
levelnode *head,*c,*d;
head=NULL;
for(i=0;i<10;i++){
b[i]=3000000;
//printf("%llu\n",b[i]);
}
i=0;
scanf("%s",a);
m=strlen(a);
level=0;
b[a[i]-'0']=0;
head=insert(head,0,0);
c=head;
d=head;
i++;
//printf("%llu\n",i);
while(i<=m-1){
k=a[i]-'0';
//printf("%d\n",k);
if(b[k]==3000000){
//printf("hy");
b[k]=++level;
//printf("%llu ",b[k]);
head=insert(head,i,b[k]);
head=head->front;
}else{
head=insert(head,i,b[k]+1);
s=b[k]+1;
d=head;
head=head->front;
while(d->level>s+1){
d->level=s+1;
d=d->back;
s++;
}
level=b[k]+1;
}
i++;
}
display1(c);
//printf("%llu\n",b[a[m-1]-'0']+1);
return 0;
}


levelnode* getlevelnode(levelnode *tmp){
tmp=(levelnode *)malloc(sizeof(levelnode));
tmp->back=NULL;
tmp->front=NULL;
return tmp;
}

levelnode* insert(levelnode *head,unsigned long long int c,unsigned long long int l){
levelnode *t,*temp,*s;
t=head;
s=head;
if(head==NULL){
head=getlevelnode(head);
head->num=c;
head->level=l;
t=head;
}else{
temp=getlevelnode(temp);
t->front=temp;
temp->num=c;
temp->level=l;
temp->back=t;
}
return head;
}

