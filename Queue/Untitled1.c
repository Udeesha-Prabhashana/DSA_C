#include<stdio.h>
#include<stdbool.h>
#define max 10

int front=-1,rear=-1,num;
int queue[10];

void insert()
{
	printf("\t Enter your value: ");
	scanf("%d",&num);
	if(rear==max-1)
	   printf("overflow");
	else if(rear==-1 && front==-1)
	   rear=front=0;
	else
	   rear+=1;   
	   queue[rear]=num;
}

void delete()
{
	if(front==-1 || front>rear){
	   printf("\tunderflow");
	   return -1;
    }
	else{
	   num=queue[front];
	   printf("%d is deleted",queue[front]);
	   front++;
	   if(front>rear)
	     front=rear=-1;
		return num; 
	   }
}

void peek()
{
	if(front==-1 || front>rear)
	   printf("\tunderflow");
	else
	printf("\tpeek value is %d",queue[front]); 
}

void display()
{
	int i;
	if(front==-1 || front>rear)
	   printf("\tunderflow");
	else{
		for(i=front;i<=rear;i++){
			printf("\t %d",queue[i]);
		}
	}   
}

int main()
{
   printf("1.insert()\n");
   printf("2.delete()\n");
   printf("3.peek()\n");
   printf("4.display()\n");
   printf("5.End the programme\n");
   
   int option;
   bool flag=true;
   while(flag){
   	printf("Enter your choes as a number: ");
   	scanf("%d",&option);
   	
   	switch(option){
   		case 1:
   			insert();
   			break;
   		case 2:
   		    delete();
   			break;
   		case 3:
   			peek();
   			break;	
		case 4:
   			display();
   			break;
		case 5:
   			flag=false;
   			printf("*****Programme is ended.*****");
   			break;
		default:
		    printf("your input is invalid! please try again..\n");
			break;	   	   	   		   	
	   }
   	printf("\n");
   }
}