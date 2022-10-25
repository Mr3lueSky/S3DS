#include<stdio.h>
#include<stdlib.h>
#define N 5
int rear = -1, front = -1;
void pqinsertion();
void pqdeletion();
void display();

struct pq{
int p;
int item;
} arr[N],temp;

void main(){
int ch;
printf("Menu\n1.Insertion\n2.Deletion\n3.Display\n4.Stop\n");
while(1){
printf("\nEnter choice: ");
scanf("%d",&ch);
switch(ch){
	case 1:pqinsertion();
	break;
	case 2: pqdeletion();
	break;
	case 3: display();
	break;
	case 4: exit(0);
	default: printf("Invalid choice!");
}
}
}

void pqinsertion(){
	if(rear == N-1){
	printf("The queue is full\n");
	}
	else if(front == -1){
	rear = 0;
	front = 0;
	printf("Enter the priority: ");
	scanf("%d",&arr[rear].p);
	printf("Enter the item: ");
	scanf("%d",&arr[rear].item);
	}
	else{
	rear = rear+1;
	printf("Enter the priority: ");
	scanf("%d",&arr[rear].p);
	printf("Enter the item: ");
	scanf("%d",&arr[rear].item);
	}
}

void display()
    {
    int i,j;
        for(i=front;i<=rear;i++)
        {
            for(j=front;j<=rear-1;j++)
            {
                if(arr[j].p<arr[j+1].p)
                {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }

           printf("\n Queue:");
           for(i=front;i<=rear;i++)
           printf(" %d P[%d] ",arr[i].item, arr[i].p);
}

void pqdeletion(){
if (rear == -1){
printf("The queue is empty");
}
else if(rear == front){
printf("The deleted element is, %d P[%d]",arr[front].item,arr[front].p);
rear=-1;
front = -1;
}
else{
printf("The deleted element is, %d P[%d]",arr[front].item,arr[front].p);
front = front+1;
}
}
