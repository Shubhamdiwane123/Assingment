#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *head,*tail=NULL;
void addnode(int data)
{
	struct node *newnode=(struct node*) malloc(sizeof(struct node));
	newnode->data=data;
	newnode->link=NULL;

	if(head==NULL)
	{
		head=newnode;
		tail=newnode;
	}
	else
	{
		tail->link=newnode;
		tail=newnode;
	}
}
void display()
{
	struct node *current=head;

	if(head==NULL)
	{
		printf("list is empty\n");
		return;

	}
	while(current!=NULL)
	{
		printf("%d ",current->data);
		current=current->link;
	}
	printf("\n");
}
void addbegin(int data)
{
	struct node *newnode=(struct node*) malloc(sizeof(struct node));

	newnode->data=data;
	newnode->link=head;
	head=newnode;
}
void search(int data)
{
	struct node *ptr=head;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	while(ptr!=NULL)
	{
		if(ptr->data==data)
		{
			printf("the %d element is found\n",data);
			return;
		}
		ptr=ptr->link;
	}
	printf("the  element is not found\n");
}
void reverse()
{
	struct node *prev=NULL,*current=head,*link=NULL;
	while(current!=NULL)
	{
		link=current->link;
		current->link=prev;
		prev=current;
		current=link;
	}
	head=prev;
}

int main()
{
	int data;
	addnode(22);
	addnode(33);
	addnode(44);
	addnode(55);
	display();
	addbegin(66);
	printf("after adding element at the begin\n");
	display();
	printf("enter the elment which u want to search\n");
	scanf("%d",&data);
	search(data);
	reverse();
	display();


}
