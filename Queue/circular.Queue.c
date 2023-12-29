#include<stdio.h>
#include<stdbool.h>
#define N 10
int front=-1,rear=-1;
int num;
int crqueue[N];

void enqueue()
{
	printf("Enter your value: ");
	scanf("%d",&num);
	if(front==(rear+1)%N)
	  printf("\toverflow");
	else if(front==-1 && rear==-1)
	  front=rear=0;
	else
	  rear=(rear+1)%N;
	crqueue[rear]=num; 
}

void dequeue()
{
	if(front==-1 && rear==-1)
	  printf("\tunderflow");
	else if(front==rear){
	  printf("\tdequeue value is %d",crqueue[front]);
	  front=rear=-1;
    }
	else{
	  printf("\tdequeue value is %d",crqueue[front]); 
	  front=(front+1)%N; 
    }
}

void display()
{
	int i;
	if(front==-1 && rear==-1)
	  printf("\tunderflow");
	else{
	  for(i=front; i<=rear; i++){
	     printf("\t %d",crqueue[i]);
	  }
    }
}

void peek()
{
	if(front==-1 && rear==-1)
	  printf("\tunderflow");
	else{
	   printf("\tpeek value is %d",crqueue[front]);
    }
}

int main()
{
	printf("1.enqueue()\n");
	printf("2.dequeue()\n");
	printf("3.display()\n");
	printf("4.peek()\n");
	printf("5End the programme\n");
	
    bool flag=true;
    while(flag){
    	printf("enter your choise as a number: ");
    	int j;
    	scanf("%d",&j);
    	
		switch(j){
		   case 1:
		   	   enqueue();
		   	   break;
		   case 2: 
		       dequeue();
		       break;
		   case 3: 
		       display();
		       break;
		   case 4: 
		       peek(); 
		       break;
		   case 5:
		   	   flag=false;
		   	   printf("*****Programme is ended.*****");
		       break;
		   default:
		       printf("invalied input. please try again");
			   break;			   	
		}
		printf("\n");
	}
}

