#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
void insert(int new_data)
{
    struct node *new_data=(struct node*)malloc(size of(struct node));
    new_node->data=new_data;
    new_node->next=head;
    head=new_node;
}
void display()
{
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
void search()
{
    int n;
    struct node *temp;
    temp=head;
    cout<<"Enter the element to be searched = "<<endl;
    cin>>n;
    while(temp!=NULL)
    {
        cout<<"The element is present"<<endl;
        return;
        temp=temp->head;
        cout<<"The element is not present"<<endl;
    }
}
void dele()
{
    struct node *temp,*ptr,*prev;
    int val;
    temp=head;
    prev=NULL;
    cout<<"Enter value to delete = ";
    cin>>val;
    while(temp&&temp->data!=val)
    {
        prev=temp;
        temp=temp->next;
    }
    if(temp)
    {
        if(prev)
        {
            prev->next=temp->next;
            delete->temp;
        }
        else
        {
            head=temp->next;
            delete temp;
        }
        return;
    }
}
int main()
{
    int ch,val;
    cout<<"1) Insert\n";
    cout<<"2) Display\n";
    cout<<"3) Searching element\n";
    cout<<"4) Delete an element\n";
    cout<<"5) Exit\n";
    do
    {
        cout<<"Enter the choice = "<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:cout<<"Insert the element = "<<endl;
            cin>>val;
            insert(val);
            break;
            case 2:display();
            break;
            case 3:search();
            break;
            case 4:dele();
            break;
            case 5:cout<<"Exit"<<endl;
            break;
            default:cout<<"Invalid!"<<endl;
        }    
    } while (ch!=4);
    return 0;
}