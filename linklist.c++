#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int value){
        data=value;
        next=NULL;
    }

};
class list{
public:
    Node* head;
    Node* tail;

    list(){
        head = NULL;
        tail = NULL;
    }

    void push_front(int value){
        Node* newNode = new Node(value);

        if(head == NULL){
            head = tail = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }
    void push_back(int value){
        Node* newnode=new Node(value);
        if (head==NULL)
        {
            head=tail= newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
        

    }
    void printll(){
        Node*temp=head;
        while (temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;

        }}
    void pop_front(){
        if (head==NULL)
        {
            return;
        }
        else{
        
        Node*temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;

    }
}
    void pop_back(){
        Node*temp=head;
        while (temp->next!=tail)
        {
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;
        
    }

    void insert_middle(int value,int position)
    {
        if (position<0)
        {
            cout<<"invalid position";
            return;
        }
        if (position==0)
        {
            push_front(value);
            return ;
        }
        Node*temp=head;
        for (int i = 0; i < position-1; i++)
        {
            temp=temp->next;
        }

        Node*newNode=new Node(value);
        newNode->next=temp->next;
        temp->next=newNode;
    }

    int search(int key){
        Node*temp=head;
        int idx=0;
        while (temp!=NULL)
        {
            if (temp->data==key)
            {
                return idx;
            }
            temp=temp->next;
            idx++;
        }
        return -1;

        
    }
        
        
    
};

int main(){
    list ll;
    ll.push_front(1); 
    ll.push_front(2); 
    ll.push_front(3);
    ll.push_back(8) ;

    ll.printll();

    cout<<" \n";
    ll.pop_front();
    ll.printll();

    cout<<"\n";
    ll.pop_back();
    ll.printll();
    cout<<"\n"; 
    ll.insert_middle(10, 1);
    ll.printll();
     cout<<"\n";
    cout<< ll.search(10)<<endl;
    
    return 0;
}