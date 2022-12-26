#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
        // destructor 
        ~Node(){
            if(this->next != NULL){
                delete next;
                this->next = NULL;
            }
        }
};
void insert(Node* &head,int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;

}
void insertTail(Node* &tail,int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int countElement(Node* &head){
    Node* temp = head;
    int count = 0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
    //cout<<"count "<<count<<endl;
}
void insertPosition(Node* &head,Node* &tail,int position,int data){
    Node* temp = head;
    int count = 1;
    if(position==1){
        insert(head,data);
        return;
    }
    while(count<position-1){
        
        temp = temp->next;
        count++;
    }
    if(temp->next==NULL){
        
        insertTail(tail,data);
        return;
    }
    
    Node* insertAtPosition=new Node(data);
    insertAtPosition->next = temp->next;
    temp->next = insertAtPosition;
}

// new specific index
void specificIndex(Node* &head,int index,int data){
    if(index==1){
        insert(head,data);
        return;
    }
    Node* newNode =new Node(data);
    Node * temp = head;
    int cnt = 1;
    while(cnt<index -1){
        temp = temp->next;
        cnt++;
    }
    newNode->next = temp->next;
    temp->next = newNode;


}

// deleting node function

void deleteNode(int position,Node* &head){
    // deleting first position
    //cout<<"head "<<head->data<<endl;
    if(position==1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    // deleting for middle and last 
    else{
        Node* current= head;
        Node* previous = NULL;
        int cnt = 1;
        while(cnt<position){
            previous = current;
            current = current->next;
            cnt++;
        }
        previous->next = current->next;
        current->next = NULL;
        delete current;
    }

}