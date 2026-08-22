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
    void printll(){
        Node*temp=head;
        while (temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;

        }
        
        
    }
};

int main(){
    list ll;
    ll.push_front(1); 
    ll.push_front(2); 
    ll.push_front(3); 
    ll.printll();
    
    
    return 0;
}