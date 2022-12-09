//Program to implement Deque using circular array

#include<stdio.h>
#include<stdlib.h>
#define N 5
void front_insertion();
void back_insertion();
void display();
void deletion_back();
void deletion_front();
int front = -1, rear =-1;
int q[100];

void main(){
	int r,ch_r,ch;
	printf("2. Output restricted\n1. Input restricted\n");
	scanf("%d",&ch_r);
	switch(ch_r){
		case 2: 
		printf("MENU\n1.Insertion(front)\n2.Insertion(back)\n3.Deletion\n4.Display\n5.Exit");
		while(1==1){
		printf("\nenter your choice: ");
		scanf("%d",&ch);
		switch(ch){
			case 1: front_insertion();
			break;
			case 2: back_insertion();
			break;
			case 3: deletion_front();
			break;
			case 4: display();
			break;
			case 5: exit(0);
		}
		}
		case 1:
		printf("MENU\n1.Insertion\n2.Deletion(back)\n3.Deletion(front)\n4.Display\n5.Exit");
		while(1==1){
			printf("\nenter your choice: ");
			scanf("%d",&ch);
			switch(ch){
				case 1: back_insertion();
				break;
				case 3: deletion_back();
				break;
				case 2: deletion_front();
				break;
				case 4: display();
				break;
				case 5: exit(0);
			}
		}
	}
	
}

//OUTPUT RESTRICTED
//To insert element at front
void front_insertion(){
	if(front == -1){
		front++;
		rear++;
		printf("enter the element: ");
		scanf("%d",&q[front]);
	}
	else if(front ==0)
		printf("Insertion not possible.");
	else{
		front--;
		printf("Enter the element: ");
		scanf("%d",&q[front]);
	}
}
//To display the deque.
void display(){
	int i;
	if(rear == -1)
		printf("The queue is empty");
	else{
		printf("Elements:\n");
		for(i=front; i!=rear; i++)
			printf("%d ",q[i]);
			printf("%d\n",q[i]);
	}
}
//To insert element at rear
void back_insertion(){
	if(rear == N-1){
		printf("The queue is full.");
	}
	else if(rear == -1){
		rear++;
		front++;
		printf("Enter the element: ");
		scanf("%d",&q[rear]);
		display();
	}
	else{
		rear++;
		printf("Enter the element: ");
		scanf("%d",&q[rear]);
	}
}
//To delete element
void deletion_front(){
	if(rear==-1)
		printf("Queue is empty");
	else if(front==rear){
		printf("Deleted element is %d",q[front]);
		front = -1;
		rear = -1;
	}
	else{
		printf("Deleted element is %d",q[front]);
		front++;
	}
}

void deletion_back(){
	if(rear == -1)
		printf("Queue is empty");
	else if(front == rear){
		printf("Deleted element is %d",q[rear]);
		rear=-1;
		front = -1;
	}
	else{
		printf("Deleted element is %d",q[rear]);
		rear--;
	}
}
