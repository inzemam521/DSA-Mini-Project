//Linked list is circular or not
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    //Constructor
    Node(int d){
        this->data=d;
        this->next=NULL;
    }

    //Destructor
    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;

    }
};
void insertNode(Node* &tail,int element,int d){

        //empty list
        if(tail==NULL){
            Node* newNode = new Node(d); //newNode created
            tail = newNode;
 newNode->next=newNode;
        }
        else{
            //Non-empty list
            Node* curr = tail;
            while(curr->data!=element){
                curr=curr->next;
            }
            //element found -> curr is representing element wala node
            Node* temp = new Node(d);
            temp -> next = curr->next;
            curr->next = temp;
            
        }
    }

    void print(Node* tail){
        Node* temp = tail;
        //empty list
        if(tail==NULL){
            cout<<"List is empty"<<endl;
            return;
   }
        do{
            cout<<tail->data<<" ";
            tail = tail->next;
        }
        while(tail!=temp);
        cout<<endl;
    }
    void deleteNode(Node* &tail,int value){
        //empty list
        if(tail==NULL){
            cout<<"List is empty"<<endl;
            return;
        }
    else{ 
        Node* prev = tail;
        Node* curr = prev->next;
        while(curr->data != value){ 
            prev = curr;
            curr = curr->next;
    }
    prev->next = curr->next;
    //1 node linked list
    if(curr==prev){
        tail=NULL;
    }
    //>=2 node linked list
    else if(tail==curr){
        tail=prev;
    }
    curr->next = NULL;
    delete curr;
  }

    }
    //Check that given list is circular or not
    bool isCircularList(Node* head){
        //empty case
        if(head==NULL){
            return true;
        }
        Node* temp = head->next;
        while(temp!=NULL && temp!=head){
            temp=temp->next;
        }
        if(temp==head){
            return true;
        }
        return false;
    }

int main(){
    Node* tail = NULL;
    insertNode(tail,5,3);
    print(tail);
    insertNode(tail,3,5);
    print(tail);
    // insertNode(tail,5,8);
    // print(tail);
    // insertNode(tail,8,10);
    // print(tail);
    // insertNode(tail,5,6);
    // print(tail);
    // deleteNode(tail,3);
    // print(tail);
    if(isCircularList(tail)){
        cout<<"linked list is circular"<<endl;
    }
    else{
        cout<<"linked list is not circular"<<endl;
    }
    return 0;
}