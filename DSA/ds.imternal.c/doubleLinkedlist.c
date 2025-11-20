#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node*prev;
    int data;
    struct node*next;
}*head=NULL;
void creat_dll(){
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->prev=temp->next=NULL;
    printf("\nenter data in node: ");
    scanf("%d",&temp->data);
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        struct node*ptr;
        ptr=head;
        while(ptr->next!=NULL)
        {
           ptr=ptr->next;
        }
        ptr->next=temp;
        temp->prev=ptr;
    }
}
void display()
{
    struct node *ptr;
    ptr=head;
    if(head==NULL)
    {
        printf("\nDLL in empety");
    }
    else
        {
          while(ptr!=NULL)
          {
          printf("<-%d->",ptr->data);
          ptr=ptr->next;
          }
        printf("NULL");
     }
}
void first_insert(){
    struct node *temp,*ptr;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->prev=temp->next=NULL;
    printf("\nEnter data:");
    scanf("%d",&temp->data);
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        ptr=head;
        temp->next=head;
        ptr->prev=temp;
        head=temp;
    }
}
void last_insert(){
    struct node *temp,*ptr;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->prev=temp->next=NULL;
    printf("\nEnter data:");
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
        temp->prev=temp;
    }
}
void Anypos_insert() {
    int pos, i;
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter position: ");
    scanf("%d", &pos);
    printf("Enter data: ");
    scanf("%d", &temp->data);
    temp->prev = temp->next = NULL;
    if (pos <= 1 || head == NULL) {
        first_insert();
    } else {
        struct node *ptr = head;
        for (i = 1; i < pos - 1 && ptr->next != NULL; i++)
            ptr = ptr->next;

        temp->next = ptr->next;
        temp->prev = ptr;
        if (ptr->next != NULL)
            ptr->next->prev = temp;
        ptr->next = temp;
    }
}
first_delete()
{
    struct node *ptr;
    ptr=head;
    if(ptr==NULL)
    {
       printf(" double linked list is empty ");
    }
    else
    {
        head=ptr->next;
        free(ptr);
    }
}
void last_delete()
{
  struct node *temp, *ptr;
  ptr=head;
if(head==NULL)
{
    printf("double linked list is empty ");
}
else{
  while(ptr->next->next!=NULL)
  {
    ptr=ptr->next;
  }
  temp=ptr->next;
  free(temp);
  ptr->next=NULL;
}
}
void Anypos_delete() {
    int pos, i;
    printf("Enter position: ");
    scanf("%d", &pos);

    if (head == NULL || pos <= 1) {
        first_delete();
    } else {
        struct node *ptr = head;
        for (i = 1; i < pos - 1 && ptr->next != NULL; i++)
            ptr = ptr->next;

        struct node *temp = ptr->next;
        if (temp == NULL) {
            last_delete();
        } else {
            ptr->next = temp->next;
            if (temp->next != NULL)
                temp->next->prev = ptr;
            free(temp);
        }
    }
}
int main(){
    int ch;
    while(1)
    {
        printf("\n0.exit \n1.creat_dll \n2.display \n3.first_insert \n4.last_insert \n5.Anypos_insert \n6.first_delete \n7.last_delete \n8.Anypos_delete \n Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                creat_dll();
                break;
            }
            case 2:
            {
                display();
                break;
            }
            case 0:
            {
                exit;
                break;
            }
            case 3:
            {
                first_insert();
                break;
            }
            case 4:
            {
                last_insert();
                break;
            }
            case 5:
            {
                Anypos_insert();
                break;
            }
            case 6:
            {
                first_delete();
                break;
            }
            case 7:
            {
                last_delete();
                break;
            }
            case 8:
            {
                Anypos_delete();
                break;
            }
}
}
}