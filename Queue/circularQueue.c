#include<stdio.h>

#define N 5

int queue[N];
int front=-1, rear = -1;

void enqueue(int el){
    if (front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear] = el;
    }
    else if ((rear+1)%N==front)
    {
        printf("OVERFLOW\n");
    }
    else
    {
        rear=(rear+1)%N;
        queue[rear]=el;
    }
    
}

void dequeue()
{
   if (front==-1 && rear==-1)
   {
        printf("underlfow\n");
   }
   else if (front==rear)
   {
        printf("dequeued element is: %d\n",queue[front]);
        front=rear=-1;
   }
   else
   {
       printf("dequeued element is: %d\n",queue[front]);
       front = (front+1)%N;
   }
    
}

void display()
{
    if (front==-1 && rear==-1)
    {
        printf("underflow\n");
    }
    else
    {
        int i = front;
        while (i != rear)
        {
            printf("%d ",queue[i]);
            i = (i+1)%N;
        }
        printf("%d ", queue[rear]);
    }
    
}

void peek()
{
    if (front==-1 && rear==-1)
    {
        printf("underflow\n");
    }
    else
    {
        printf("element in the front is : %d\n", queue[front]);
    }
    
}
int main(int argc, char const *argv[])
{
    enqueue(2);
    enqueue(0);
    enqueue(-1);
    enqueue(2);
    enqueue(7);
    display();
    printf("\n");
    dequeue();
    display();

    return 0;
}
