#include<stdio.h>
#include<stdlib.h>

struct node
{
	int value;
	struct node *link;
}*ptr,*temp,*head;

void initialise()
{
	head = NULL;
}

int count = 0;

struct node* create()
{
	temp = (struct node*)malloc(sizeof(struct node));	
	temp->link = NULL;
	return temp;
}

void push(int num)
{
	if(head == NULL)
	{
		temp = create();
		temp ->value = num;
		head = temp;
	}
	else
	{
		temp = create();
		temp->value = num;
		ptr = head;
		while(ptr->link!=NULL)
		{
			ptr = ptr->link;
		}
		ptr->link = temp;
	}
	++count;
}

void display()
{
	if (head == NULL)
	{
		printf("List is Empty! \n");
	}
	else
	{
		ptr = head;
		while(ptr!=NULL)
		{
			printf("this node has: %d\n",ptr->value);
			ptr = ptr->link;
		}
	}
}

int pop()
{
	int item = 000;
	if (head == NULL)
	{
		printf("Underflow\n");
	}
	else
	{
		ptr = head;
		while(ptr->link!=NULL)
		{
			temp = ptr;
			ptr = ptr->link;
		}
		item = ptr->value;
		free(ptr);
		temp->link = NULL;
		--count;
		if(count == 0)
			head = NULL;
	}
	return item;
}

int main()
{
	int choice = 0;
	initialise();
	int num,item;
	create();
	while(choice!=4)
	{
	printf("\nWelcome! press \n1)push \n2)display \n3)pop \n4)exit \n");
	scanf("%d",&choice);	
	switch(choice)
	{
		case 1:
		{
			printf("Enter number ");
			scanf("%d",&num);
			push( num);
			break;
		}
		case 2:
		{
			display();
			break;
		}
		case 3:
		{
			item = pop();
			printf("popped item: %d\n",item);
			break;
		}
		case 4:
		{
			return 0;
		}
	}
	}
}
	

	
	