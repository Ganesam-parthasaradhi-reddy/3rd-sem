#include<stdio.h>
#include<stdlib.h>
struct node {
    int data ;
    struct node *next; 
}*head=NULL;
void create_csll()
{
    struct node *temp, *ptr;
    temp=(struct node*)malloc(sizeof(struct node  ));
    printf("enter the data :");
    scanf("%d", &temp->data);
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
        temp->next=head;
    }
    else
    {
        ptr=head;
        while(ptr->next!=head)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
        temp->next=head;
    }
}
void display()
{
    if(head==NULL)
    {
        printf("circular linked list is empty");
    }
    else
    {
        struct node *ptr;
        ptr=head;
        while(ptr->next!=head)
        {
            printf("%d->",ptr->data);
            ptr=ptr->next;
        }
     printf("%d->head",ptr->data);
    }
}
count(){
    int c=0;
    struct node*ptr;
    ptr=head;
    while(ptr->next!=head)
    {
        c++;
        ptr=ptr->next;
    }
    c++;
    return c;
}
 void last_insert()
{
    create_csll();
}
void first_insert()
{
    struct node *temp,*ptr;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->next=NULL;
    printf("enter the value  in node :");
    scanf("%d",&temp->data);
    if(head==NULL)
    {
        head=temp;
        temp->next=head;
    }
    else
    {
        temp->next=head;
        ptr=head;
        while(ptr->next!=head)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
        head=temp;
    }
}
 void Anypos_insert()
{
  struct node *temp,*ptr;
  ptr=head;
  int c=count;
  int pos;
  printf("\nenter pos:");
  scanf("%d",&pos);
  if(pos<1 || pos>c+1)
  {
    printf("invalid pos");
  }
  else if(pos==1)
  {
    first_insert();
  }
  else if(pos>1 && pos<c)
  {
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\nenter data:");
    scanf("%d",&temp->data);
    int i;
    for(i=1;i<pos-1;i++)
{
  ptr=ptr->next;
}
temp->next=ptr->next;
ptr->next=temp;
}
else
{
  last_insert();
}
}
void first_delete()
{
  struct node *temp,*ptr;
  ptr=head;
  temp=head;
  if(head==NULL)
  {
    printf("cll is empty");
  }
  else if(count()==1)
  {
    head=NULL;
  }
  else
  {
    while(ptr->next!=head)
    {
        ptr=ptr->next;
    }
    head=temp->next;
    ptr->next=head;
    printf("%d",temp->data);
    free(temp);
  }
}
void last_delete()
{
    struct node *temp , *ptr ;
    ptr=head;
    if(head==NULL)
    {
      printf("\ncll is empty");
    }
    else{
        if(count()==1)
        {
            head=NULL;
        }
        else
        {
            while(ptr->next->next!=head)
            {
                ptr=ptr->next;
            }
            temp=ptr->next;
            ptr->next=head;
            printf("%d deleted ",temp->data);
            free(temp);
        }
    }
}
void Anypos_delete(){
    int pos,c;
    printf("enter the position :");
    scanf("%d",&pos);
    c=count();
    if(pos<1 || pos>c)
    {
        printf("\n invalid position ");
    }
    else
    {
        struct node*temp,*ptr;
       if(pos==1)
       {
        first_delete();
       }
       else if (pos>1 && pos<c)
       {
        int i ;
        ptr=head;
        for(i=1;i<pos-1;i++)
        {
            ptr=ptr->next;
        }
        temp=ptr->next;
        ptr->next=temp->next;
        free(temp);
       }
       else{
        last_delete();
       }
    }
}
int  searching()
{
    struct node *temp, *ptr;
    ptr=head;
    int key;
    printf("enter key :");
    scanf("%d",&key);
   do {
    if(ptr->data==key)
    {
        printf("element is found");
        return 0;
    }
    else
        ptr=ptr->next;
   }
   while(ptr!=head);
    printf("key not found");
}
 int main()
 {
    int ch;
    while(1)
    {
        printf("\n0.exit \n1.create \n2.display \n3.count \n4.last_insert \n5.first_insert  \n6.Anypos_insert \n7.first_delete \n8.last_delete \n9.Anypos_delete \n10.searching  \nENTER YOUR CHOISE ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                create_csll();
                break;
            }
            case 2:
            {
                display();
                break;
            }
            case 3:
            {
                printf("nodes count is :%d",count());
                break;
            }
            case 0:
            {
                exit;
                break;
            }
            case 4:
            {
                last_insert();
                break;
            }
            case 5:
            {
                first_insert();
                break;
            }
            case 6:
            {
                Anypos_insert();
                break;
            }
            case 7:
            {
                first_delete();
                break;
            }
            case 8:
            {
                last_delete();
                break;
            }
            case 9:
            {
                Anypos_delete();
                break;
            }
            case 10:
            {
                searching();
                break;
            }
            default:
            printf("entered wrong choice");
        }
    }
 }