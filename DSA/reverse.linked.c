#include<stdio.h>
#include<stdlib.h>
 
struct Node{
    int Data;
    struct Node* Next;
};
 
int main()
{
    int N,i,value;
    scanf("%d",&N);
    //creating HeadNode
    struct Node* Head = (struct Node*)malloc(sizeof(struct Node));
    Head->Next = NULL;
    
    // Reading Values From Users
    for(i=0;i<N;i++){
        scanf("%d",&value);
        //Creating Newnode
        struct Node* NewNode = (struct Node*)malloc(sizeof(struct Node));
        NewNode->Data = value;
        // Adding NewNode Before Head
        NewNode->Next = Head;
        // Updating to New Head
        Head = NewNode;
    }
    
    struct Node* Temp = Head;
    // printing values of linkedlist
    while(Temp){
        printf("%d ",Temp->Data);
        Temp = Temp->Next;
    }
}


//Reverse of linked list