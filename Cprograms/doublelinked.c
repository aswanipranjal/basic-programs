#include<stdio.h>
#include<stdlib.h>

struct node
{
	int value;
	struct node *previous;
	struct node *next;
	
}*head, *ptr;

void insert_begin(int value)
{
	struct node *node;
	node = (struct node*)malloc(sizeof(struct node));
	node->value = value;
	node->previous = NULL;
	node->next = NULL;
	if(head == NULL)
	{
		head = node;
	}
	else
	{
		node->next = head;
		head->previous = node;
		head = node;
	}

}

void insert_end(int value)
{
	struct node *node;
	node = (struct node*)malloc(sizeof(struct node));
	ptr = (struct node*)malloc(sizeof(struct node));
	if(head == NULL)
	{
		node->value = value;
		node->next = NULL;
		node->previous = NULL;
		head = node;
	}
	else
	{
		node->value = value;
		node->previous = NULL;
		node->next = NULL;
		ptr = head;
		while(ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		node->previous = ptr;
		ptr->next = node;
		ptr = node;
	}
	
}

void display()
{
	ptr = head;
	if(ptr == NULL)
	{
		printf("Empty list!\n");
	}
	do
	{
		printf("This node contains %d\n",ptr->value);
		ptr = ptr->next;
	}while(ptr != NULL);
	
	printf("End of list\n");
}

void delete_node(int value)
{
	int flag = 0;
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	ptr = (struct node*)malloc(sizeof(struct node));
	if(head == NULL)
	{
		printf("Empty list, nothing to delete");
	}
	else
	{
		ptr = head;
		if(ptr->value == value)
		{
			temp = ptr->next;
			temp->previous = NULL;
			free(ptr);
			head = temp;
		}
		else
		{
			while(ptr->value != value)
			{
				ptr=ptr->next;
				flag = 1;
			
			}
			if (flag == 0)
			{
				printf("Invalid entry! \n");
			}
			else
			{	
				temp = ptr->previous;
				temp->next = ptr->next;			
				ptr->next->previous = temp;
				free(ptr);
			}
		}
	}
}

void display_reverse()
{
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	ptr = (struct node*)malloc(sizeof(struct node));
	ptr = head;
	while(ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	printf("The values in reverse order: \n");
	do
	{
		printf("%d\n", ptr->value);
		ptr= ptr-> previous;
	}while(ptr != NULL);
}
	
int main()
{
	int choice,num;
	head = NULL;
	while ( choice != 5)
	{
		printf("Welcome!\n1)to insert in the beginning\n2)in the end\n3)to delete value\n4)display\n5)to print in reverse\n6)exit ");
		scanf(" %d",&choice);
		switch(choice)
		{
			case 1:
			{
				printf("Enter number: ");
				scanf("%d",&num);
				insert_begin(num);
				break;
			}
			case 2:
			{
				printf("Enter number: ");
				scanf("%d",&num);
				insert_end(num);
				break;
			}
			case 3:
			{
				printf("Enter value: ");
				scanf("%d",&num);
				delete_node(num);
				display();
				break;
			}
			case 4:
			{
				display();
				break;
			}
			case 5:
			{
				display_reverse();
				break;
			}
			case 6:
			{
			return 0;
			}
		}
	}
}







