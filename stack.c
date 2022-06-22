/* stack uing array */
#include<stdio.h>
#include<stdlib.h>
# define n 5
int top=-1;
int stack[n];

		void push(int val)
		{
		if(isfull())
		{
		printf("\n OVERFLOW \n");
		}
		else
		{
		top++;
		stack[top]=val;
		printf("\n Pushed \n",stack[top]);
		}}
		 

		void pop()
		{
		if(isempty())
		{
		printf("\n UNDERFLOW \n");
		}
		else
		{
		printf("\n Popped \n",stack[top]);
		stack[top]=-1;
		top--;
		}
		}


		int isfull()
		{
		if(top==n-1)
		return 1;
		else return 0;
		}



		int isempty()
		{
		if(top==-1)
		return 1;
		else return 0;
		}


		void findtop()
		{ 
		printf("\n top position %d",top);
		printf("\n top value %d\n",stack[top]);
		}



		void display()
		{
		int i,x;
		x=top;
		for(i=x;i>=0;i--)
		printf("\n%d\t\n",stack[i]);
		}



void main()
{
while(1){
int ch,entry;
printf("\n 1.push \n 2.pop \n 3.display \n 4.find top \n 5.exit \n\n");
printf("enter your choice:");
scanf("%d",&ch);
switch(ch)
{


case 1:{
printf("enter the data");
scanf("%d",&entry);
push(entry);
break;
}

case 2:
{
pop();
break;
}

case 3:
{
printf("\nFrom top ; LIFO(last in first out) \n");
display();
break;
}

case 4:
{
printf("\nposition starts from zero ");
findtop();
break;
}

case 5:{
			printf("\n Good Bye\n");
			exit(0);
			}
}
}
}
