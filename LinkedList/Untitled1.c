#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node*next;
};

struct node*head=0;
struct node*temp;

struct node* getnode()
{
	struct node* newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter your data:");
	scanf("%d",& newnode->data);
	newnode->next=0;
	return newnode;
}

void inserthead()
{
	struct node* newnode
	newnode=getnode();
	temp=head;
	if(temp==0){
	    head=newnode;
	}
	else{
		newnodede->next=head->next;
		head=newnode;
		
	}
}

void inserttail()
{
	struct node* newnode
	newnode=getnode();
	temp=head;
	if(temp==0){
	    head=newnode;
	}
	else{
		while(temp!=o){
			temp=temp->next;
		}
		temp->next=newnode;
		newnode->next=0;
	}
}