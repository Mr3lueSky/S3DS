#include<stdio.h>
#include<stdlib.h>
#define N 4
int Q[N], front=-1, rear =-1;
int enqueue(int);
void dequeue();
void display();
void main(){
	int ch,item;
	while(1){
		printf("\nMenu\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch){
		case 1: printf("Enter the item to be inserted: ");
		scanf("%d",&item);
		enqueue(item);
		break;
		
		case 2: dequeue();
		break;
		
		case 3: display();
		break;
		
		case 4: exit(0);
		}
	}
}
		
int enqueue(int item){
	if(front == (rear+1)%N){
		printf("The queue is full\n");
	}
	else if(rear == -1){
		rear++;
		front++;
		Q[rear] = item;
	}
	else{
		rear=(rear+1)%N;
		Q[rear] = item;
	}
}

void display(){
	int i = front;
	if(front == -1 && rear ==-1){
		printf("The queue is empty");
	}
	else{
		printf("The required array is: \n");
		while(i != rear){
			printf("%d ",Q[i]);
			i = (i+1)%N ;	
		}
		printf("%d ",Q[i]);
	}
}

void dequeue(){
	if(rear == -1){
		printf("The queue is empty\n");
	}
	else if(front == rear){
		printf("The deleted element is %d",Q[rear]);	
		rear = -1;
		front = -1;
	}
	else{
		printf("The deleted element is %d",Q[front]);
		front = (front+1)%N;
	}
}
