/*double linked list*/
#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
struct Node
{
struct Node *prev;
int data;
struct Node *next;
};
struct Node *head;
typedef struct Node node;
void main()
{
void insertatfront(int ele);
void insertatrear(int ele);
void deleteatfront();
void deleteatrear();
void search(int key);
void display();
int ch,ele,key,pos;

while(1)
{
printf("\n1-insert at front\t");
printf("2- insert at end \t");
printf("3-delete at front\n");
printf("4- delete at end \t");
printf("5-search\t");
printf("6-display\t");
printf("7-exit\n");
printf("\nenter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1: printf("enter the element: ");
 scanf("%d",&ele);
 insertatfront(ele);
 break;
case 2: printf("enter the element: ");
 scanf("%d",&ele);
 insertatrear(ele);
 break;
case 3: deleteatfront();
 break;
case 4: deleteatrear();
 break;
case 5: printf("enter the element to search:");
 scanf("%d",&key);
 search(key);
 break;
case 6:display();
 break;
case 7:exit(0);
 break;
default: printf("you have entered wrong choice\n");
break;
}
}
}
void insertatfront(int ele)
{
node *newNode;
newNode=(node *)malloc(sizeof(node));
newNode ->prev=NULL;
newNode->data=ele;
newNode->next=NULL;
if(head==NULL)
{
head= newNode;
printf("Node Inserted\n");
}
else
{
newNode->next=head;
head->prev=newNode;
head=newNode;
printf("Node Inserted\n");
}
}

void insertatrear(int ele) {
node *newNode,*temp;
newNode=(node *)malloc(sizeof(node));
newNode->prev=NULL;
newNode->data=ele;
newNode->next=NULL;
if(head==NULL) {
head=newNode;
}
else {
temp=head;
while(temp
->next!=NULL)
{
temp= temp->next;
}
temp->next= newNode;
newNode->prev=temp;
newNode->next=NULL;
}
printf("Node Inserted\n");
}
void deleteatfront() {
node *temp;
if(head==NULL) {
printf("Linked list is empty");
return;
}
else if(head
->next==NULL)
{
head=NULL;
free(head);
}
else {
temp=head;
head=head
->next;
head
->prev=NULL;
free(temp);
printf("Node Deleted\n");
}
}
void deleteatrear() {

node *temp1,*temp2;
if(head==NULL)
{
printf("Linked list is empty");
return;
}
else if(head->next==NULL)
{
head=NULL;
free(head);
}
else
{
temp1=head;
while(temp1->next!=NULL)
{
temp2=temp1;
temp1=temp1->next;
}
temp2->next=NULL;
free(temp1);
}
printf("Node Deleted\n");
}
void search(int key)
{
node *temp;
int pos=1;
if(head==NULL)
{
printf("Linked list is empty");
return;
}
else
{
temp=head;
while((temp->next!=NULL)&&(temp->data!=key))
{
pos++;
temp=temp->next;
}
if(temp->data==key)
printf("\nsearch element is found at location:%d\n",pos);
else
printf("\nsearch element is not found\n");
}
}

void display()
{
node *temp;
if(head==NULL)
{
printf("Linked list is empty");
return;
}
else
{
printf("\n double linked list elements are:");
temp=head;
while(temp!=NULL)
{
printf("%d->",temp->data);
temp=temp->next;
}
printf("\n");
}
}