#include<stdio.h>
#include<stdbool.h>

int array_stack[10];
int top=-1;

bool isfull(){
	if(top==9){
		return true;	
	}
	else{
		return false;
	}
}

bool isempty(){
	if(top==-1){
		return true;
	}
	else{
		return false;
	}
}

void pop(){
	if(isempty()){
		printf("The stack is empty.\n");
	}
	else{
	    printf("%d is poped\n",array_stack[top]);
	    --top;
	}	
}

void push(){
	if(isfull()){
		printf("The stack is full\n");
	}
	else{
	    printf("enter the value you want to push:");
	    int data;
	    scanf("%d",&data);
	    array_stack[++top]=data;
	    printf("%d added to stack.\n",data);
	}
}

void peek(){
	if(isempty()){
		printf("stack is empty");
	}
	else{
		printf("peek value:%d\n\n",array_stack[top]);
	}
}
 void main()
{
	printf("1.push()\n");
	printf("2.pop()\n");
	printf("3.peek()\n");
	printf("4.isfull()\n");
	printf("5.isempty()\n");
	printf("6.End the programme()\n\n");
	
	bool colo=true;
	while(colo){
		printf("enter the number:");
		int number;
		scanf("%d",&number);
		
		switch(number){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				peek();
				break;
			case 4:
				printf(isfull()?"stack is full":"stack isn't full\n");
	         break;
			case 5:
				printf(isempty()?"stack is empty":"stack isn't empty\n");
				break;
			case 6:
				colo=false;
			   printf("*****Programme is ended.*****");
				break;
			default:
				printf("your input is invalid! please try again..\n");
				break;	
		}
		printf("\n");
	}
}