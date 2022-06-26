#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;
};
struct node*top=NULL;

void push(int val)
{
    struct node*newnode=(struct node*)malloc(sizeof (struct node*));
    newnode->data=val;
    newnode->next=top;
    top=newnode;
}
void pop()
{
    if(top==NULL)
    cout<<"Stack Underflow\n";
    else
    {
        cout<<"the popped element is : "<<top->data<<endl;
        top=top->next;
    }
}
void display()
{
    struct node*ptr;
    if(top==NULL)
    cout<<"Stack is empty\n";
    else{
        ptr=top;
        cout<<"Stack elements are : ";
        while(ptr!=NULL)
        {
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
    }
    cout<<endl;
}
void topelement()
{
    cout<<"Top element is : "<<top->data<<endl;
}
void empty()
{
    if(top==NULL)
    cout<<"Stack is empty\n";
    else{
        while(top!=NULL)
        {
            top->data=NULL;
            top=top->next;
        }
    }
    cout<<"Stack is empty\n";
}

int main()
{
    int ch,val;
    cout<<"1) Push in Stack \n";
    cout<<"2) Pop in Stack \n";
    cout<<"3) Display Stack \n";
    cout<<"4) Top Element \n";
    cout<<"5) Empty Stack \n";
    cout<<"6) Exit "<<endl;

    do
    {
        cout<<"Enter your choice : ";
        cin>>ch;
        switch(ch)
        {
            case 1: cout<<"Enter the value to be pushed :";
                    cin>>val;
                    push(val);
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: topelement();
                    break;
            case 5: empty();
                    break;
            case 6: cout<<"Exit\n";
                    break;
            default : cout<<"Invalid choice \n";
                      break;
        }
    } while (ch!=6);
    return 0;
}
