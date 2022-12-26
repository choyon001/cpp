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
void insertHead(Node* &head,int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}
void insertTail(Node* &tail,int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
void specificIndex(Node* &head,int index,int data){
    if(index==1){
        insertHead(head,data);
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
void print(Node* &head){
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void deleteNode(int position,Node* &head){
    // deleting first position
    cout<<"head "<<head->data<<endl;
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
int main(){
    Node* head = new Node(10);
    Node* tail = head;
    insertTail(tail,12);
    print(head);
    insertTail(tail,15);
    print(head);
    // insert index
    specificIndex(head,6,222);
    print(head);
    deleteNode(2,head);
    print(head);
    return 0;
}