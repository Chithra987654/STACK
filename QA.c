// Queue - Array
#include<stdio.h>
#include <stdlib.h>
# define n 5
void main()
{
int queue[n], front=0, rear=0, i=0 ,ch, entry;
int x=n;
while(1)
{
printf("\t\t\tQUEUE OPERATIONS\n1)INSERT\n 2)DELETE \n3)DISPLAY \n4)EXIT\n\nENTER YOUR CHOICE:");
scanf("%d",&ch);
switch(ch)
{
	case 1:
	{
		if(rear==x)
		printf("queue is full");
		else
		{
			printf("enter the no to be inserted:");
			scanf("%d",&entry);
			queue[rear]=entry;
			rear++;
			printf("element inserted\n");
		} break;
	}
	case 2:
	{
		if(front==rear)
		printf("queue is empty\n");
		else
		{
			front++;
			x--;
		printf("deleted\n");
		} break;
	}
	case 3:
	{
		if(front==rear)
		printf("there is nothing to display\n");
		else
		{
			for(i=front;i<rear;i++)
			{
				printf("\t%d\t",queue[i]);
			}
		printf("\n");
		} break;
	 
	}
	case 4:
	{
	exit(0);
	}
	default:
                printf("Wrong Choice: please see the options\n");
}
}
}
