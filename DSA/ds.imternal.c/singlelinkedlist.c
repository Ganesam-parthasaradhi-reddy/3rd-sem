#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}*head=NULL;
void creatlinkedlist()
{
  struct node *temp,*ptr;
  temp=(struct node*)malloc(sizeof(struct node));
  temp->next=NULL;
  printf("\nenetr the data in node: ");
  scanf("%d",&temp->data);
  if(head==NULL)
 {
    head=temp;
 }     
 else 
 {
    ptr=head;
    while(ptr->next!=NULL)
    {
      ptr=ptr->next;
    }
    ptr->next=temp;
  }
}
void displaylinkedlist()
{
    struct node *ptr=head;
    if(ptr==NULL)
    {
    printf("linked list is empty\n");
    }
    else
    { 
        while(ptr->next!=NULL)
        {
            printf("%d->",ptr->data);
            ptr=ptr->next;
        }
        printf("NULL");
    }
}
void first_insert()
{
    struct node *temp , *ptr ;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->next=NULL;
    printf("enter data in first node:");
    scanf("%d",&temp->data);
    temp->next=head;
    head=temp;
    printf("insert at first successfull!!");
}
void last_insert()
{
    struct node *temp,*ptr;
    temp=(struct node*)malloc (sizeof(struct node));
    temp->next=NULL;
    printf("enter the data in last node: ");
    scanf("%d",&temp->data);
    ptr=head;
    while (ptr!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;
    printf("added node at last successfully..!!");
}
void first_delete()
{
    struct node *ptr;
    ptr=head;
    head=ptr->next;
    free(ptr);
    printf("first node deleted succesfully");
}
void last_delete()
{
    struct node *ptr,*temp;
    ptr=head;
    while(ptr->next->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=NULL;
    free(temp);
}
void Anypos_insert()
{
    int pos, i, count = 0;
    struct node *temp, *ptr = head;
    while (ptr != NULL) {
        count++;
        ptr = ptr->next;
    }
    temp = (struct node*)malloc(sizeof(struct node));
    temp->next = NULL;
    printf("Enter data: ");
    scanf("%d", &temp->data);
    printf("Enter position: ");
    scanf("%d", &pos);
    if (pos < 1 || pos > count + 1) {
        printf("Invalid position\n");
        return;
    }
    if (pos == 1) {
        temp->next = head;
        head = temp;
    } else {
        ptr = head;
        for (i = 1; i < pos - 1; i++)
         ptr = ptr->next;
        temp->next = ptr->next;
        ptr->next = temp;
    }
    printf("Inserted at position %d successfully\n", pos);
}
void Anypos_delete()
{
  int pos , i , count=0;
  struct node *temp ,*ptr=head;
  while(ptr!=NULL)
  {
    count++;
    ptr=ptr->next;
  }
  printf("\n enter position :");
  scanf("%d",&pos);
  if(pos<1 || pos>count)
  {
    printf("\n invalid position");
  }
  else
  {
    if(pos==1)
    {
        head=ptr->next;
        free(ptr);
        printf("\n%d node is delete successfully!!",ptr->data);
    }
    else {
          for(int i=1;i<pos-1;i++)
          {
            temp=ptr->next;
            ptr->next=temp->next;
            free(temp);
            printf("\n Anypos_delete is succesfully!!",temp->data);
          }
    }
  }
}
void traverse_linkedlist() {
    struct node *ptr = head;
    printf("Traversing the linked list: ");
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
void sumofelement()
{
    int sum=0;
    struct node *ptr ;
    ptr=head;
    if(head==NULL)
    {
        printf("\nsell is empty");
    }       
    else{
        while(ptr!=NULL)
        {
            sum=sum+ptr->data;
            ptr=ptr->next;
        }
        printf("\nsum is %d",sum);
    }
}
int main(){
int ch;
while(1)
{
    printf("\n1.creatlinkedlist \n2.display \n3.first_insert \n4.last_insert \n5.first_delete \n6.last_delete \n7.Anypos_insert \n8.Anypos_delete \n9.sumofelement \n10.traverse_linkedlist  \n11.exit \nenter your choice:");
    scanf("%d",&ch);
    if(ch==1)
    {
    creatlinkedlist();
    }
    else if(ch==2)
    {
        displaylinkedlist();
    }
    else if(ch==3)
    {
        first_insert();
    }
    else if(ch==4)
    {
        last_insert();
    }
    else if(ch==5)
    {
        first_delete();
    }
    else if(ch==6)
    {
        last_delete();
    }
    else if(ch==7)
    {
        Anypos_insert();
    }
    else if(ch==8)
    {
        Anypos_delete();
    }
    else if(ch==9)
    {
        sumofelement();
    }
    else if(ch==10)
    {
        traverse_linkedlist();
    }
    else if(ch==11)
    {
        break;
    }
    else
    printf("wrong choice entered");
} 
}