#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	int data; // data
	struct node *next; // address
}node_t;
node_t *head;//struct node *head;
node_t* create_node(int value);
void add_first(int value);
void display_list();
int count_nodes();
void add_last(int value);
void add_at_position(int position, int value);

int menu_operations();
void trav_rev(node_t * trav);

int main(void)
{
	int choice, pos, data;

		do
		{
			choice=menu_operations();
			switch(choice)
			{
				default : printf("\n invalid case ");
						continue;
				case 0:
					    return 0;
				case 1:	// Add 1st
						printf("\n Enter Data:: ");
						scanf("%d", &data);
						add_first(data);
						break;
				case 2: // Add Last
						printf("\n Enter Data:: ");
						scanf("%d", &data);

						add_last(data);
						break;
				case 3: // add at position
						printf("\n Enter Position :: ");
						scanf("%d", &pos);
						if(pos<0 || pos > (count_nodes()+1))
						{
							printf("\n invalid position ");
						}
						else
						{
							printf("\n Enter Data:: ");
							scanf("%d", &data);

							add_at_position(pos,data);
						}
						break;
				case 4 :
						break;
				case 5: //
						break;


				case 6: // display
						display_list();
						break;
                case 7: // display rev  using rec

					    trav_rev(head);
						printf("\n");
						break;
			}
			if(choice!=6)
				display_list();

			printf("\n Enter 1 to continue ot 0 to exit ::");
			scanf("%d", &choice);

		}while(choice!=0);
	
	return EXIT_SUCCESS;
}
node_t* create_node(int value)
{
	node_t *newnode=NULL;
	newnode= (node_t*)malloc(sizeof(node_t)*1);
	newnode->data=value;
	newnode->next=NULL;
	return newnode;
}
void add_first(int value)
{
	node_t *newnode=NULL;
	newnode= create_node(value);
	if(head==NULL)
		head=newnode;
	else
	{
		newnode->next=head;
		head=newnode;
	}
	return ;
}
void display_list()
{
	node_t * trav=NULL;
	trav=head;
		printf("\n");

	if(trav==NULL)
	{
		printf("\n list is empty");
	}
	else
	{
		while(trav!=NULL)
		{
			printf("%d--->", trav->data);
			trav=trav->next;
		}
	}
	printf("\n");
	return;
}
void add_last(int value)
{
	node_t *newnode=NULL;
	newnode=create_node(value);
	if(head==NULL)
		head=newnode;
	else
	{
		node_t *trav=head;
		while(trav->next!=NULL)
		{
			trav=trav->next;
		}
		trav->next=newnode;
	}
	return ;
}
int count_nodes()
{
	node_t * trav=NULL;
	int counter=0;
	trav=head;
	if(trav==NULL)
		return 0;
	else
	{
		while(trav!=NULL)
		{
			counter++;
			trav=trav->next;
		}
	}
	return counter;
}
void add_at_position(int position, int value)
{
	node_t *newnode=NULL;
	node_t *trav=NULL;
	int i;
	if(position==1)
		add_first(value);
	else if( (count_nodes()+1)==position)
		add_last(value);
	else
	{
		newnode= create_node(value);
		trav=head;
		for(i=1; i<position-1; i++)
		{
			trav=trav->next;
		}
		newnode->next=trav->next;
		trav->next=newnode;
	}
	return;
}



void trav_rev(node_t * trav)
{
    if(trav== NULL)
        return;
    else
        trav_rev(trav->next);
    printf("%5d-->", trav->data);
}
int menu_operations()
{
	int choice;
	printf("\n 1. Add First \n 2. Add Last \n 3. Add At Position ");
	printf("\n 4. Del Frist \n 5. Del Last  \n 6. Display List \n 7. Print Rev Using rec \n 0. Exit \n");
	printf("\n Enter Your Choice:: ");
	scanf("%d", &choice);
	return choice;
}
