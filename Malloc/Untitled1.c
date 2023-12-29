#include <stdio.h>
#include <malloc.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

struct  node *head, *newnode , *temp;
int count = 0;

void create(){
    newnode = (struct node*) malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d",&newnode->data);
    newnode->prev = 0;
    newnode->next = 0;
    count++;
}

void insertAtBeginning();
void insertAtEnd();
void insertAtMiddle();
void displayElements();
void deleteAtBeginning();
void deleteAtEnd();


int main(){
    head = 0;
    int option;
    
    while(1){

        printf("\n\n");
        printf("1. Insert at the beginning\n");
        printf("2. Insert at the end\n");
        printf("3. Insert at the middle\n");
        printf("4. Display elements\n");
        printf("5. Delete from the beginning\n");
        printf("6. Delete from the end\n\n");


        printf("Enter option: ");
        scanf("%d",&option);

        switch (option){
        	case 1:
            	insertAtBeginning();
            	break;
        	case 2:
            	insertAtEnd();
            	break;
        	case 3:
            	insertAtMiddle();
            	break;
        	case 4:
            	displayElements();
            	break;
        	case 5:
            	deleteAtBeginning();
            	break;
        	case 6:
            	deleteAtEnd();
            	break;
        	default:
            	break;
        }
	}

	return 0;
}

void insertAtBeginning(){
    create();
    if(head == NULL){
        head = newnode;
        newnode->next = head;
        newnode->prev = head;
    }else {
        temp = head;
        while(temp->next != head){
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->prev = temp;
        head->prev = newnode;
        newnode->next = head;
        head = newnode;
    }
}

void insertAtEnd(){
    create();
    if(head == NULL){
        head = newnode;
        newnode->prev = head;
        newnode->next = head;

    }
	else{
        temp = head;
        while(temp->next != head){
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->prev = temp;
        head->prev = newnode;
        newnode->next = head;
    }
}

void insertAtMiddle(){
    int position = 1;
    create();
    if(head == NULL){
        head = newnode;
        newnode->prev = head;
        newnode->next = head;

    }
	else{
       temp = head;
       while(position < count/2){
            temp = temp->next; 
            position++;
       }
       newnode->next = temp->next;
       newnode->prev = temp;
       temp->next->prev = newnode;
       temp->next = newnode;
    }
}

void displayElements(){
    if (head == NULL){
        printf("List is empty");
    }
	else{
    temp = head;
    while (temp->next != head){
        printf("%d ",temp->data);
        temp = temp -> next;
    }
    printf("%d ",temp->data);
    printf("\n");
    }
}

void deleteAtBeginning(){
     if(head == NULL){
      printf("List is empty");
    }
	else if(head->next == head){
        head = NULL;
    }
	else{
        temp = head;
        while(temp -> next != head){
            temp = temp -> next;
        }
        temp->next = head->next;
        head->next->prev = temp;
        head = temp -> next;
    }
}

void deleteAtEnd(){
     if(head == NULL){
      printf("List is empty");
    }
	else if(head->next == head){
        head = NULL;
    }
	else{
        temp = head;
        while(temp->next->next != head){
            temp = temp -> next;
        }
        temp->next = head;
        head->prev = temp;
    }
}