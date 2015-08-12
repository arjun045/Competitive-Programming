#include<stdio.h>
#include<malloc.h>

struct node{
		int value;
		struct node *next_adj_edge;
	   };

struct nodetype{
			int edge;
			struct node *adj_edge;
			struct nodetype *next;	
	       };
typedef struct node node;
typedef struct nodetype nodetype;

struct node_bfs{
		     int level;
		     int gave_level;
		     int edge_value;	
		     struct node_bfs *front;
		}; 
typedef struct node_bfs node_bfs;


nodetype* getnodetype(nodetype *);
nodetype* insert_edge(nodetype *,int);
void display(nodetype *);
node* getnode(node *);
nodetype* insert_adj_edge(nodetype *,int,int);
node_bfs* getnode_bfs(node_bfs *);
node_bfs* bfs(nodetype *,int);
void dis(node_bfs *);

main(){
int p,n,i,l,j,q,w,co=0;
nodetype *edges,*e;
edges=NULL;
printf("No of vertex to be inserted:\n");
scanf("%d",&n);
p=n;
printf("Enter the vertex:\n");
while(n--){
scanf("%d",&i);
edges=insert_edge(edges,i);
}
e=edges;
printf("No of edges u want to input:\n");
scanf("%d",&l);
for(j=0;j<l;j++){
scanf("%d %d",&q,&w);
while(e!=NULL){
if(e->edge==q || e->edge==w)
co++;
e=e->next;
}
//printf("%d\n",co);
if(co==2)
edges=insert_adj_edge(edges,q,w);
else{
printf("Not a valid edge enter another\n");
j=j-1;
}
e=edges;
co=0;
//display(edges);
}
bfs(edges,p);
//display(edges);
}


nodetype* getnodetype(nodetype *tmp){
tmp=(nodetype *)malloc(sizeof(nodetype));
tmp->adj_edge=NULL;
tmp->next=NULL;
return tmp;
}

nodetype* insert_edge(nodetype *edges,int c){
nodetype *t,*temp;
//printf("char is %d\n",c);
t=edges;
if(edges==NULL){
edges=getnodetype(edges);
edges->edge=c;
t=edges;
}else{
while(t->next!=NULL){
t=t->next;
}
temp=getnodetype(temp);
t->next=temp;
temp->edge=c;
}
return edges;
}



node* getnode(node *tmp){
tmp=(node *)malloc(sizeof(node));
tmp->next_adj_edge=NULL;
return tmp;
}

nodetype* insert_adj_edge(nodetype *edges,int c,int d){
nodetype *m;
node *tp,*t;
int count=0;
m=edges;
//printf("%d %d\n",c,d);
//t=adj_edges;
while(m->edge!=c){
m=m->next;
}
//printf("%d",m->edge);
tp=m->adj_edge;
if(tp==NULL){
//printf("hello");
t=getnode(t);
t->value=d;
m->adj_edge=t;
}else{
while(tp->next_adj_edge!=NULL){
tp=tp->next_adj_edge;
}
t=getnode(t);
t->value=d;
tp->next_adj_edge=t;
}
//printf("%d",m->adj_edge->value);
//display(edges);
return edges;
}


void display(nodetype *edges){
node *head;
nodetype *temp;
temp=edges;
while(temp!=NULL){
printf("%d->",temp->edge);
head=temp->adj_edge;
while(head!=NULL){
//printf("hy");
printf("%d ",head->value);
head=head->next_adj_edge;
}
printf("\n");
temp=temp->next;
}
}

node_bfs* getnode_bfs(node_bfs *tmp){
tmp=(node_bfs *)malloc(sizeof(node_bfs));
tmp->front=NULL;
return tmp;
}

node_bfs* bfs(nodetype *vertex,int p){
int search,count1=0,l=1,a[100],t=1,count=0,i;
nodetype *s;
node_bfs *head,*m,*tmp,*y;
node *k;
head=NULL;
printf("The starting vertex\n");
scanf("%d",&search);
a[0]=search;
for(i=0;i<p;i++){
s=vertex;
while(search!=s->edge){
s=s->next;
}
//printf("%d\n",s->edge);
if(head==NULL){
head=getnode_bfs(head);
head->level=0;
head->gave_level=-1;
head->edge_value=s->edge;
m=head;
y=head;
}
//printf("%d\n",s->edge);
k=s->adj_edge;
//printf("%d\n",k->value);
while(k!=NULL){
//printf("%d\n",k->value);
while(y!=NULL){
//printf("%d ",y->edge_value);
if(k->value==y->edge_value){
count1++;
}
//printf("%d ",count1);
y=y->front;
}
y=head;
//printf("%d\n",count1);
if(count1==0){
tmp=getnode_bfs(tmp);
tmp->gave_level=s->edge;
a[l++]=k->value;
//printf("%d ",a[l-1]);
while(s->edge!=y->edge_value){
//printf("%d",y->edge_value);
y=y->front;
}
//printf("\n");
tmp->edge_value=k->value;
tmp->level=y->level+1;
m->front=tmp;
m=m->front;
}
y=head;
k=k->next_adj_edge;
//count++;
}
//printf("\n");
search=a[t++];
count1=0;
//dis(head);
//printf("%d\n",search);
}
dis(head);
}

void dis(node_bfs *head){
printf("computed_vertex || level  ||  previous_vertex\n");
while(head!=NULL){
printf("%d %d %d\n",head->edge_value,head->level,head->gave_level);
head=head->front;
}
}
/*while(k!=NULL){
tmp=getnode_bfs(tmp);
tmp->gave_level=s->edge;
tmp->level=count++;
m->front=tmp;
for(i=0;i<l;i++){
if(a[i]==k->value){
q++;
}
}
if(q==0){
a[l++]=k->value;
}
m=m->front;
k=k->next_adj_edge;
}
}
search=a[t++];
}
}*/
