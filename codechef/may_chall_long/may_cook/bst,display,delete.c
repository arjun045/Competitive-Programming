#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node* right;
struct node* left;
};
typedef struct node node;
node* getnode(int key);
node* insert(node* r,int key);
int search_element(node* r,int search);
void preorder(node* r);
void postorder(node* r);
void inorder(node* r);
void delete(node* r,int key);

main()
{
	node* root;
	int n,key,search;
	root=NULL;
	//printf("enter elements of the list\n");
	do
	{
		printf("enter \n 1 to insert an element in the tree \n 2 to search an element in the tree \n 3 to exit \n 4 to display tree in preorder \n 5 to display tree in postorder \n 6 to display tree in inorder \n 7 to delete an element of the tree");		
		scanf("%d",&n);
		switch(n)
		{
			case 1:
			{
				printf("\nenter element of the tree");
				scanf("%d",&key);
				root=insert(root,key);
				break;
			}
			case 2:
			{
				printf("\nenter element to be searched in tree");
				scanf("%d",&search);
				n=search_element(root,search);
				if(n==0)
					printf("\n %d element is not present in the list\n",search);
				else
					printf("\n %d is present in the tree\n",search);			
				break;
			}
			case 3:
			{
				exit(0);
				break;
			}
			case 4:
			{
				preorder(root);
				break;
			}
			case 5:
			{
				postorder(root);
				break;
			}
			case 6:
			{
				inorder(root);
				break;
			}
			case 7:
			{
				printf("enter the elemnt u want to delete");
				scanf("%d",&key);
				delete(root,key);
				break;
			}
			default:
			{
				printf("invalid choice");
			}	
		}
		
	}while(1);
}

node* getnode(int key)
{
	node* temp;
	temp=(node*)malloc(sizeof(node));
	temp->info=key;
	temp->left=NULL;
	temp->right=NULL;
	return(temp);
}

node* insert(node* r,int key)
{
	node* temp;
	node* p;
	node* q;
	temp=getnode(key);
	if(r==NULL)
	{
		r=temp;
		return(r);
	}
	else
	{
		p=r;
		q=r;
		while((key!=p->info)&&(q!=NULL))
		{
			p=q;
			if(key < p->info)
			{
				q=p->left;
			}
			else
			{
				q=p->right;
			}
		}
		if(key==p->info)
		{
			printf("%d %s \n",key,"is a duplicate");
		}
		else if(key < p->info)
		{
			p->left=temp;
		}
		else
		{
			p->right=temp;
		}
		return(r);
	}

}

int search_element(node* r,int search)
{
	node* p;
	node* q;
	p=r;
	q=r;
	if(r==NULL)
	{
		//printf("tree is empty\n");
		return(0);
	}
	else
	{
		while((search!=p->info)&&(q!=NULL))
		{
			p=q;
			if(search < p->info)
			{
				q=p->left;
			}
			else
			{
				q=p->right;
			}
		}
		if(search==p->info)
		{
			return(1); //printf("\n %d is present in the tree\n",search);
		}
		else
		{
			return(0);//printf("\n %d element is not present in the list\n",search);
		}
	}

}



void preorder(node* r)
{
	
	if(r!=NULL)
	{
		printf("%d \t",r->info);
		preorder(r->left);
		preorder(r->right);
	}
}

void postorder(node* r)
{
	if(r!=NULL)
	{
	postorder(r->left);
	postorder(r->right);
	printf("%d \t",r->info);
	}
}

void inorder(node* r)
{
	if(r!=NULL)
	{
		inorder(r->left);
		printf("%d \t",r->info);
		inorder(r->right);
	}
}

void delete(node* r,int key)
{
	node* p;
	node* q;
	node* t;
	node* s;

	if(search_element(r,key))
	{
		p=r;
		q=r;
		while(key!=q->info)
		{
			p=q;
			if(key<(p->info))
				q=p->left;
			else
			q=p->right;
			
		}
		if((q->left==NULL)&&(q->right==NULL)) //leaf node
		{
			if(q==p->left)
				p->left=NULL;
			else
				p->right=NULL;
			free(q);
			printf("element is deleted successfully \n");
			
		}
		else if((q->left!=NULL)&&(q->right==NULL)) //node with only left subtree
		{
			p->left=q->left;
			free(q);
			printf("element is deleted successfully \n");
			
		}
		else if((q->left==NULL)&&(q->right!=NULL)) //node with only right subtree
		{
			p->left=q->right;
			free(q);
			printf("element is deleted successfully \n");
		}
		else if((q->left!=NULL)&&(q->right!=NULL))//ROOT NODE
		{
			//find the max element in the left subtree that element wont hav any right subtree
			t=q->left;
			s=q;
			
			while(t->right!=NULL)
			{
				s=t;
				t=t->right;
			}
			//substituting the info of t in q..
			q->info=t->info;
			if(t==q->left)
			{
				q->left=NULL;
				free(t);
			}
			else if(t->left==NULL) //leaf node
			{
				s->right=NULL;
				free(t);
			}
			else
			{
				s->right=t->left;
				free(t);
			}
			printf("element is deleted successfully \n");			
		}
	}
	else
	printf("element is not present in tree");
}
