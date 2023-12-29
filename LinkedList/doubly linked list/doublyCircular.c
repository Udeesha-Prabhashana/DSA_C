#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
    struct node* prev;
};

struct node * head, * newnode, * temp;

struct node* getNode()
{
    newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode==NULL)
    {
        return NULL;
    }
    else
    {
        printf("enter data: ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        newnode->prev=NULL;
        return newnode;
    }
    
}

void addToHead()
{
    newnode = getNode();
    if (newnode==NULL)
    {
        printf("memory cannot be alloctaed");
    }
    else
    {
        if (head==NULL)
        {
            head=newnode;
            head->next=head;
            head->prev=head;
        }
        else
        {
            temp = head;
            while (temp->next!=head)
            {
                temp = temp->next;
            }
            
            newnode->next=head;
            newnode->prev=temp;
            head->prev = newnode;
            temp->next = newnode;
            head = newnode;
        }
        
    }
    
}

void diaplay()
{
    if (head==NULL)
    {
        printf("UNDERFLOW\n");
    }
    else
    {
        temp=head;
        while (temp->next!=head)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("%d ",temp->data);
    }
    
}

void addToTail()
{
    newnode = getNode();
    if (head==NULL)
    {
        head=newnode;
        head->next=head;
        head->prev=head;
    }
    else
    {
        temp=head;
        while (temp->next!=head)
        {
            temp=temp->next;
        }
        
        newnode->next=head;
        newnode->prev=temp;
        head->prev = newnode;
        temp->next = newnode;
    }
    
}

void insertAfter(int ele)
{
    newnode-getNode();
    if (newnode==NULL)
    {
        printf("memory cannot be alloctaed");
    }
    else
    {
        if (head==NULL)
        {
            head=newnode;
        head->next=head;
        head->prev=head;
        }
        else
        {
            temp = head;
            while (temp->next!=head)
            {
                if (temp->data==ele)
                {
                    newnode->next = temp->next;
                    newnode->prev = temp;
                    temp->next->prev=newnode;
                    temp->next = newnode;
                    break;
                }
                temp=temp->next;
            }
            // if (temp->data==ele)
            // {
            //     newnode->next = temp->next;
            //         newnode->prev = temp;
            //         temp->next->prev=newnode;
            //         temp->next = newnode;
            // }
            
        }
        
    }
    
}

void insertBefore(int ele)
{
    newnode = getNode();
    if (newnode==NULL)
    {
        printf("memory cannot be alloctaed");
    }
    else
    {
        if (head==NULL)
        {
            head=newnode;
            head->next=head;
            head->prev=head;
        }
        else
        {
            temp = head;
            while (temp->next!=NULL)
            {
                if (temp->data==ele)
                {
                    
                    newnode->prev=temp->prev;
                    newnode->next=temp;
                    temp->prev->next = newnode;
                    temp->prev = newnode;
                    break;
                    
                }
                temp=temp->next;
            }
            
        }
        
    }
    
}

void deleteFromHead()
{
    struct node* delnode;
    if (head==NULL)
    {
        printf("UNDERFLOW\n");
    }
    else
    {
        delnode=temp = head;
        while (temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next = head->next;
        head->next->prev=temp;
        head=head->next;
        printf("deleted element: %d\n",delnode->data);
        free(delnode);

    }
    
}

void deleteFromTail()
{
    struct node* delnode;
    if (head==NULL)
    {
        printf("UNDERFLOW\n");
    }
    else
    {
        temp=head;
        while (temp->next->next!=head)
        {
            temp=temp->next;
        }
        delnode=temp->next;

        temp->next=head;
        head->prev=temp;
        printf("deleted element: %d\n",delnode->data);
        free(delnode);
    }
    
}

// void deleteAfter(int ele)
// {
//     struct node* delnode, *afternode;
//     if (head==NULL)
//     {
//         printf("UNDERFLOW\n");
//     }
//     else
//     {
//         temp=head;
//         while (temp->next!=head)
//         {
//             if (temp->data==ele)
//             {
//                 delnode=temp->next;
//                 afternode=temp->next->next;
//                 afternode->prev=temp;
//                 temp->next=afternode;
                
//                 printf("deleted element: %d\n",delnode->data);
//                 free(delnode);
//                 break;
//             }
            
//         }
        
//     }
    
// }

void search(int val)
{
    temp = head;
    while (temp->next != head)
    {
        if (temp->data==val)
        {
            printf("value found\n");
        }
        temp = temp->next;
    }
    
}

int main(int argc, char const *argv[])
{
    // addToHead();
    // addToHead();
    // addToHead();
    // addToTail();
    // diaplay();
    // printf("\n");
    // insertAfter(2);
    // diaplay();
    // printf("\n");
    // insertBefore(1);
    // diaplay();
    // printf("\n");
    // deleteFromHead();
    // diaplay();
    // printf("\n");
    // deleteFromTail();
    // diaplay();
    // printf("\n");
    // deleteAfter(5);
    // diaplay();
    // printf("\n");

    addToHead();
    addToHead();
    addToHead();
    addToHead();
    addToHead();
    diaplay();
    printf("\n");
    search(3);
    return 0;
}
