#include<iostream>
using namespace std;

//Structure for Linked List Creation
struct Node
{
    int data;
    struct Node* next;

};

// Global Variables
struct Node* Top;
int Data;

void create(int data)
{

    struct Node* node=new Node;

    if (node==NULL)
    {
        cout<<("\nStack Over Flow-Unable to create the NOde\n");
        return;
    }

    else
    {
       node-> data=data;
       node->next=Top;
       Top=node;

    }
}

void display()
{
    cout<<"\n welcome to display \n";

    Node* node=Top;

    while (node!=NULL)
    {
        cout<<"Data is "<< node->data<<endl;
        node=node->next;
    }
}

void deleted()
{
    struct Node* node=Top;
    if (node==NULL)
    {
        cout<<("\n Stack Underflow\n");
        return;
    }
    cout<<("Deleted Data %d ",node->data);

    Top=Top->next;
    free(node);

}
// Main function
int main()
{

    int data=0;
    int choice=0;

    while (1)
    {
    cout<<("\nPlease Enter Data ");
    cin>>data;
    create(data);
    cout<<("\nDo you want to continue? -1 for exit ");
    cin>>choice;
    if (choice==-1)
    {
        break;
    }
    }

    display();

    while (1)
    {

    cout<<("\nDo you want to Delete the Data? ");
    cin>>choice;
    if (choice==-1)
    {
        break;
    }
    deleted();
    }


    display();

    return 0;
}
