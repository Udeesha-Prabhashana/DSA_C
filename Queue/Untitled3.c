#include <stdio.h>
#include <stdlib.h>
#define MAX 500
int front=0;
int rear=0;
int queueArr[MAX]={1};



void enQueue(int data){
    queueArr[++rear]=data;


}

int deQueue(){

        int deQueueData=queueArr[front];
        ++front;
        return deQueueData;
        }

int peek(){
    return queueArr[front];
}


int main()
{
    printf("Enter the number(<500): ");
    int number;
    scanf("%d",&number);

    for(int i=1; i<=number; i++){
        int data1=peek()*10;
        enQueue(data1);
        int data2=(peek()*10)+1;
        enQueue(data2);
        printf("%d ",deQueue());
    }

 }