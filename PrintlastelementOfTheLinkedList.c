#include<stdio.h>
struct node
{
     int data;
     struct node* next;
}*head=0,*temp,*newnode;

void createLk()
{
     int choice=1;
     while(choice)
     {
          newnode=malloc(sizeof(struct node));
          printf("Enter the elements: ");
          scanf("%d",&newnode->data);
          newnode->next=0;
          if(head==0){
               head=temp=newnode;
          }
          else{
               temp=temp->next;
               temp=newnode;

          }
          printf("Do you want to continue(0/1): ");
          scanf("%d",& choice);
     }
}
void printLk();

int main()
{
     createLk();
     printf("hi");
     printLk();
}
void printLk()
{
     head=temp;
     while(temp->next!=0){
          temp=temp->next;
     }
     printf("The last element is: %d ",temp->data);

}

