////////////////////////////////static///////////////////
//#include<stdio.h>
//#include<stdlib.h>
//struct node{
//	int data;
//	struct node*next;
//};
//int main()
//{
//	struct node*node1=(struct node*)malloc(sizeof(struct node));
//	node1->data=100;
//	node1->next=NULL;
//	
//	struct node*node2=(struct node*)malloc(sizeof(struct node));
//	node2->data=100;
//	node2->next=NULL;
//	
//	node1->next=node2;
//	printf("%d %d",node1->next);
//}
//////////////////////////////dynamic////////////////////
//#include<stdio.h>
//#include<stdlib.h>
//
//struct Node {
//    int data;
//    struct Node*Next;
//};
//
//int main() {
//    int N,i;
//    scanf("%d",&N);
//    struct *Node Head = (struct *Node)malloc(sizeof(struct Node));
//    struct Node *Temp = Head;
//    for(i = 0; i < N; i++) {
//        int value = 0;
//        scanf("%d",&value);
//        struct Node NewNode = (struct Node)malloc(sizeof(struct Node));
//        NewNode->data = value;
//        NewNode->Next = NULL;
//        Temp->Next = NewNode;
//        Temp = Temp->Next;
//    }
//
//    struct Node *Iterator = Head->Next;
//    while(Iterator !=NULL) {
//        printf("%d ",Iterator->data);
//        Iterator = Iterator->Next;
//    }
//    
//    return 0;
//}
//////////////////////////////////////insertion of elements////////////////////////
/*#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* Next;
};
int main()
{
    int n,i,value;
    scanf("%d",&n);
    struct Node* Head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* Temp = Head;
    
    //creating dynamic linked list
    for(i=0;i<n;i++)
    {
        scanf("%d",&value);
        struct Node* NewNode = (struct Node*)malloc(sizeof(struct Node));
        NewNode->data = value;
        NewNode->Next = NULL;
        Temp->Next = NewNode;
        Temp = Temp->Next;
    }
    Head = Head->Next;
    
    
    // insertion at given point
    
//    int newValue = 0;
//    int position = 0;
//    scanf("%d %d",&newValue,&position);
//    
//    struct Node* NewNode = (struct Node*)malloc(sizeof(struct Node));
//    NewNode->data = newValue;
//    NewNode->Next = NULL;
//    
//    Temp = Head;
//    int Count = 1;
//    
//    while(Count != position-1){
//        Temp = Temp->Next;
//        Count++;
//    }
//    struct Node* NextNode = Temp->Next;
//    Temp->Next = NewNode;
//    NewNode->Next = NextNode;
    
    // deletion at given position node
	int position,count=1;
	scanf("%d",&position);
	Temp=Head;
	if(position ==1)
	{
		Temp=Temp->Next;
	}
	else{
		while(count !=position-1){
			Temp=Temp->Next;
			count++;
		}
		Temp->Next=Temp->Next->Next;
	}
    
    //printing linked list
    Temp = Head;
    while(Temp){
        printf("%d ",Temp->data);
        Temp = Temp->Next;
    }
    return 0;
}*/
#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at the tail
void insertAtTail(struct Node** head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to delete the head node
void deleteAtHead(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty, nothing to delete.\n");
        return;
    }

    struct Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

// Function to display the list
void displayList(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function to take user input
int main() {
    struct Node* head = NULL;
    int choice, value;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert at Tail\n");
        printf("2. Delete at Head\n");
        printf("3. Display List\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                insertAtTail(&head, value);
                break;
            case 2:
                deleteAtHead(&head);
                break;
            case 3:
                displayList(head);
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice, please try again.\n");
        }
    }

    return 0;
}

