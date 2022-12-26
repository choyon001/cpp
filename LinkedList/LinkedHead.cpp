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
//    cout<<"count "<<count<<endl;
}
void insertPosition(Node* &head,Node* &tail,int position,int data){
    Node* temp = head;
    int count = 1;
    int size =1;
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
int main(){
    Node* head = new Node(10);
    Node* tail = head;
    insertTail(tail,12);
    //print(head);
    insertTail(tail,15);
    //print(head);
    insertTail(tail,20);
    //print(head);
    insertPosition(head,tail,4,22);
    insertPosition(head,tail,4,22);
    print(head);
    int size = countElement(head);
    cout<<size<<endl;
    return 0;
}
