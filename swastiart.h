struct node	{
	int data; 
	struct node *next;
	struct node *pre;
};
struct node *head,*newnode,*tail,*temp;
void display()
{
    struct node *temp;
    temp=head;
    while(temp->next!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
    printf("\n");
}
void createdll()
{
	struct node *temp,*newnode;
	int choice;
	do
    {   
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        newnode->pre=NULL;
    if(head==NULL)
    {
        head=newnode;
        temp=newnode;
    }
    else
    {
       newnode->pre=temp;
       temp->next=newnode;
       tail=temp=newnode;
    }
    printf("if continue press 1 else 0\n");
    scanf("%d",&choice);
    }while(choice==1);
}
void insertatbegin()
{
	
	newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->pre=NULL;
    newnode->next= head;
    head->pre=newnode;
	head=newnode;
}
void insertatend()
{
	temp=tail;
	newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->pre=temp;
    newnode->next=NULL;
    temp->next=newnode;
    tail=newnode;
}
void atany(int pos)
{
	int i=1;
	temp=head;
	while(i<pos-1)
	{
		temp=temp->next;
		i++;
	}
	newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
	newnode->pre=temp;
	newnode->next=temp->next;
	temp->next->pre=newnode;
	temp->next=newnode;
	temp=newnode;
		
}
long int sum(struct node *head)
{
	long int sum=0;
	while(head->next!=NULL)
	{
		sum=sum+head->data;
		head=head->next;
	}
	sum=sum+head->data;
	return sum;
}


long int add(struct node *head,long int a)
{
	while(head->next!=NULL)
	{
		a=a+head->data;
		head=head->next;
	}
	a=a+head->data;
	return a;
}
long int sub(struct node *head,long int a)
{
	while(head->next!=NULL)
	{
		a=a-head->data;
		head=head->next;
	}
	a=a-head->data;
	return a;
}
long int mul(struct node *head,long int a)
{
	long int b=sum(head);
	a=a*b;
	return a;
}
long int divide(struct node *head,long int a)
{
	long int b=sum(head);
	a=a/b;
	return a;
}

long int mod(struct node *head,long int a)
{   
	long int b;
	b=sum(head);
	a=a%b;
	return a;
}
 
