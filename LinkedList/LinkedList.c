# include <stdio.h>
# include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *head = 0;
struct node *temp;

struct node* getnode()
{
	struct node *newnode;
	newnode = (struct node *) malloc(sizeof(struct node));
	printf("Enter the data u want to insert : ");
	scanf("%d", &newnode->data);
	newnode->next = 0;
	return newnode;
}

int countArray()
{
	int count=0;
	
	temp = head;
	while (temp != 0)
	{
		temp = temp->next;
		count++;
	}
	return count;
}

void addToHead()
{
	struct node *newnode;
	newnode = getnode();
	
	if (head == 0)
	{
		head = newnode;
	}
	else
	{
		newnode->next = head;
		head = newnode;
	}
}

void addToTail()
{
	struct node *newnode;
	newnode = getnode();
	
	if (head == 0)
	{
		head = newnode;
	}
	else
	{
		temp = head;
		while (temp->next != 0)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
}

void insertAfter()
{
	int pos, i=1;
	printf("Enter the position U want to insert : ");
	scanf("%d", &pos);
	
	if (pos > 0 && pos < countArray())
	{
		struct node *newnode;
		newnode = getnode();
		
		temp = head;
		while (i<pos)
		{
			temp = temp->next;
			i++;
		}
		
		newnode->next = temp->next;
		temp->next = newnode;
	}
	else
	{
		printf("Invalid Position\n");
	}
}

void deleteFromHead()
{
	if (head == 0)
	{
		printf("Underflow\n");
	}
	else
	{
		temp = head;
		head = head->next;
		printf("Delted node of value : %d\n", temp->data);
		free(temp);
	}
}

void deleteFromTail()
{
	if (head == 0)
	{
		printf("Underflow\n");
	}
	else
	{
		temp = head;
		
		while (temp->next->next != 0)
		{
			temp = temp->next;
		}
		
		printf("Delted node of value : %d\n", temp->next->data);
		free(temp->next);
		temp->next = 0;
	}
}

void deleteAfter()
{
	int pos, i=1;
	printf("Enter the position U want to delete : ");
	scanf("%d", &pos);
	
	if (pos > 0 && pos < countArray())
	{
		struct node *prevNode;
		prevNode = head;
		while (i<pos-1)
		{
			prevNode = prevNode->next;
			i++;
		}
		
		temp = prevNode->next;
		prevNode->next = prevNode->next->next;
		free(temp);
		printf("Delted node of value : %d\n", temp->data);
		
	}
	else
	{
		printf("Invalid Position\n");	
	}
}

void display()
{
	struct node *temp;
	temp = head;
	while (temp != 0)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}

void main()
{
	addToTail();
	addToTail();
	addToTail();
	display();
	addToHead();
	addToHead();
	addToHead();
	display();
	insertAfter();
	display();
	deleteFromHead();
	display();
	deleteFromTail();
	display();
	deleteAfter();
	display();
	printf("Array size : %d ",countArray());
	
	return 0;
}