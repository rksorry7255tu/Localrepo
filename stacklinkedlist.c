//single linked list
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;
};
struct Node*head;
typedef struct Node node;
void push(int ele);
void pop();
void display();
void main()
{
    int choice,ele;
    printf("\n::Stack using linked list::\n");
    while(1)
    {
        printf("\n*****MENU*****\n");
        printf("1.push\n2.pop\n3.display\n4exit\n");
        printf("enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("enter the value to insert");
                   scanf("%d",&ele);
                   push(ele);
                   break;
            case 2:pop();
                   break;
            case 3:display();
                   break;
            case 4:exit(0);
                    
            default :printf("wrong selection !!!please try again\n");              
           

        }
    }
}
void push(int ele)
{
    node *newnode;
    newnode=(node*)malloc(sizeof(node));
    newnode->data=ele;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        printf("element inserted\n");
    }
    else
    {
        newnode->next=head;
        head=newnode;
        printf("element inserted\n");

    }
}
void pop()
{
    node *temp;
    if(head==NULL)
    {
        printf("stack is empty\n");
    }
    else{
        temp=head;
        head=head->next;
        temp->next=NULL;
        free(temp);
        printf("element deleted");
    }
}
void display()
{
    node*temp;
    if(head==NULL)
    {
        printf("stack is empty\n");
        
    }
    else
    {
        printf("stack elements are");
        temp=head;
        while(temp!=NULL)
        {
            printf("%d->",temp->data);
            temp=temp->next;
        }
        
    }

}