#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head;
typedef struct Node node;
void insert(int ele);
void delete();
void display();
void main()
{
    int choice,ele;
    printf("Queue implementation using linked list");
    while(1)
    {
        printf("\n*****MENU*****\n");
        printf("1.enQueue\n2.deQueue\n3.display\n4.exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("enter the element to insert\n");
                    scanf("%d",&ele);
                    insert(ele);
                    break;
            case 2: delete();
                    break;
            case 3: display();
                    break;
            case 4:exit(0);
            default:printf("wrong selection!!!please try again");
        }
    }
}
void insert( int ele)
{
    node*newnode,*temp;
    newnode=(node*)malloc(sizeof(node));
    newnode->data=ele;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        //printf("element inserted\n");
    }
    else{
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
    printf("element inserted\n");


}
void delete()
{
    node*temp;
    if(head==NULL)
    {
        printf("Queue is empty\n");
        return;
    }
    else
    {
        temp=head;
        head=head->next;
        temp->next=NULL;
        free(temp);
        printf("element deleted\n");
    }
}
void display()
{
    node*temp;
    if(head==NULL)
    {
        printf("Queue is empty\n");
        return;
    }
    else{
        printf("\nQueue elements are\n ");
        temp=head;
        while(temp!=NULL)
        {
            printf("%d->",temp->data);
            temp=temp->next;
        }
    }
}


