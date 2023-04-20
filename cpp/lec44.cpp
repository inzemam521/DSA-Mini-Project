//Linked list=>It is a type of linear data structure which is formed by collecton of nodes
//Node=>It is combination of data and address of next node 
/*
#include<bits/stdc++.h>
using  namespace std;
    class Node{
        public:
        int data;
        Node*next;
        
        //constructor
        Node(int data){
            this->data=data;
            this->next=NULL;
        }
    };

     int main(){
        Node*node1=new Node(10);
        cout<<node1->data <<endl;
        cout<<node1->next<<endl;

        return 0;
    }
*/

//Insertion of node
/*
//Insert at head/start
#include<bits/stdc++.h>
using namespace std;
    class Node{
        public:
        int data;
        Node*next;
        
        //constructor
        Node(int data){
            this->data=data;
            this->next=NULL;
        }
    };

    void insertAtHead(Node* &head, int d){

        //new node created
        Node* temp=new Node(d);
        temp->next=head;
        head=temp;

    }
    void print(Node* &head){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

     int main(){
        //created a new node
        Node*node1=new Node(10);
       // cout<<node1->data <<endl;
       // cout<<node1->next<<endl;

        //head point to new node
        Node*head=node1;
       print(head);

       insertAtHead(head,12);
       print(head);

       insertAtHead(head,15);
       print(head);

       return 0;
    }*/

/*
    //Insert at tail/end
    #include<bits/stdc++.h>
using namespace std;
    class Node{
        public:
        int data;
        Node*next;
        
        //constructor
        Node(int data){
            this->data=data;
            this->next=NULL;
        }
    };

    void insertAtHead(Node* &head, int d){

        //new node created
        Node* temp=new Node(d);
        temp->next=head;
        head=temp;

    }

    void insertAtTail(Node* &tail, int d){
        Node*temp=new Node(d);
        tail->next=temp;
        tail=temp;
    }

    void print(Node* &head){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

     int main(){
        //created a new node
        Node*node1=new Node(10);
       // cout<<node1->data <<endl;
       // cout<<node1->next<<endl;

        //head point to new node
        Node*head=node1;
        Node* tail=node1;
       print(head);

       insertAtTail(tail,12);
       print(head);

       insertAtTail(tail,15);
       print(head);

       return 0;
    }*/

/*
//Insertion at any position
    #include<bits/stdc++.h>
using namespace std;
    class Node{
        public:
        int data;
        Node*next;
        
        //constructor
        Node(int data){
            this->data=data;
            this->next=NULL;
        }
    };

    void insertAtHead(Node* &head, int d){

        //new node created
        Node* temp=new Node(d);
        temp->next=head;
        head=temp;

    }

    void insertAtTail(Node* &tail, int d){
        Node*temp=new Node(d);
        tail->next=temp;
        tail=temp;
    }

    void print(Node* &head){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

    void insertAtPosition(Node*&tail,Node* &head,int position, int d){

        //inserting at start postion
        if(position==1){
           insertAtHead(head,d);
           return; 
        }
        //inserting at middle position
       Node* temp=head;
       int cnt=1;
       while(cnt<position-1){
        temp=temp->next;
        cnt++;
       }
       //inserting at last position (updating tail)
       if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
       }

       //creating node for d
       Node*nodeToInsert=new Node(d);
       nodeToInsert->next=temp->next;
       temp->next=nodeToInsert;

    }

     int main(){
        //created a new node
        Node*node1=new Node(10);

        //head point to new node
        Node*head=node1;
        Node* tail=node1;
       print(head);

       insertAtTail(tail,12);
       print(head);

       insertAtTail(tail,15);
       print(head);

       insertAtPosition(tail,head,4,26);
       print(head);

       cout<<"Head:"<<head->data<<endl;
       cout<<"Tail:"<<tail->data<<endl;

       return 0;
    }*/

/*
    //Deletion of node
 #include<bits/stdc++.h>
using namespace std;
    class Node{
        public:
        int data;
        Node*next;
        
        //constructor
        Node(int data){
            this->data=data;
            this->next=NULL;
        }
        //destructor
        ~Node(){
            int value=this->data;
            //memory free
            if(this->next!=NULL){
                delete next;
                this->next=NULL;
            }
            cout<<"Memory is free for node with data:"<<value<<endl;
        }
    };

    void insertAtHead(Node* &head, int d){

        //new node created
        Node* temp=new Node(d);
        temp->next=head;
        head=temp;

    }

    void insertAtTail(Node* &tail, int d){
        Node*temp=new Node(d);
        tail->next=temp;
        tail=temp;
    }

    void print(Node* &head){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

    void insertAtPosition(Node*&tail,Node* &head,int position, int d){

        //inserting at start postion
        if(position==1){
           insertAtHead(head,d);
           return; 
        }
        //inserting at middle position
       Node* temp=head;
       int cnt=1;
       while(cnt<position-1){
        temp=temp->next;
        cnt++;
       }
       //inserting at last position (updating tail)
       if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
       }

       //creating node for d
       Node*nodeToInsert=new Node(d);
       nodeToInsert->next=temp->next;
       temp->next=nodeToInsert;

    }

    void deleteNode(int position,Node* &head){
        
        //deleting first or start position
        if(position==1){
            Node*temp=head;
            head=head->next;
            // free start node from memory
            temp->next=NULL;
            delete temp;
        }
        else{
            //deleting any middle node or last node
            Node* curr=head;
            Node* prev=NULL;

            int cnt=1;
            while(cnt<position){
                prev=curr;
                curr=curr->next;
                cnt++;
            }
            prev->next=curr->next;
            curr->next=NULL;
            delete curr;
        }
    }

     int main(){
        //created a new node
        Node*node1=new Node(10);

        //head point to new node
        Node*head=node1;
        Node* tail=node1;
       print(head);

       insertAtTail(tail,12);
       print(head);

       insertAtTail(tail,15);
       print(head);

       insertAtPosition(tail,head,4,26);
       print(head);

       cout<<"Head:"<<head->data<<endl;
       cout<<"Tail:"<<tail->data<<endl;

       deleteNode(3,head);
       print(head);

       cout<<"Head:"<<head->data<<endl;
       cout<<"Tail:"<<tail->data<<endl;
  
       return 0;
    }*/


/*
//Doubly linked list
#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node*prev;
    Node*next;

    //constructor
    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
};
//traversing linked list
void print(Node*head){
    Node*temp=head;

    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<endl;
}
//gives length of linked list
int getLength(Node*head){
    int len=0;
     Node*temp=head;

    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

int main(){
    Node*node1=new Node(10);
    Node*head=node1;
    print(head);
cout<<getLength(head)<<endl;
    return 0;
}*/

/*
//Insertion at head
#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node*prev;
    Node*next;

    //constructor
    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
};
//traversing linked list
void print(Node*head){
    Node*temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
//gives length of linked list
int getLength(Node*head){
    int len=0;
     Node*temp=head;

    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
 void insertAtHead(Node* &head,int d){

    Node*temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
 }

int main(){
    Node*node1=new Node(10);
    Node*head=node1;
    print(head);
    cout<<getLength(head)<<endl;

    insertAtHead(head,11);
    print(head);

    insertAtHead(head,13);
    print(head);

    insertAtHead(head,8);
    print(head);

    return 0;
}*/

/*
//Insertion at tail
#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node*prev;
    Node*next;

    //constructor
    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
};
//traversing linked list
void print(Node*head){
    Node*temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
//gives length of linked list
int getLength(Node*head){
    int len=0;
     Node*temp=head;

    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
 void insertAtHead(Node* &head,int d){

    Node*temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
 }

 void insertAtTail(Node* &tail,int d){
    Node*temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
 }

int main(){
    Node*node1=new Node(10);
    Node*head=node1;
    Node*tail=node1;

    print(head);
    cout<<getLength(head)<<endl;

    insertAtHead(head,11);
    print(head);

    insertAtHead(head,13);
    print(head);

    insertAtHead(head,8);
    print(head);

    insertAtTail(tail,25);
    print(head);

    return 0;
}*/

/*
//Insert at any position
#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node*prev;
    Node*next;

    //constructor
    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
};
//traversing linked list
void print(Node*head){
    Node*temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
//gives length of linked list
int getLength(Node*head){
    int len=0;
     Node*temp=head;

    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
 void insertAtHead(Node* &head,int d){

    Node*temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
 }

 void insertAtTail(Node* &tail,int d){
    Node*temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
 }

 void insertAtPosition(Node* &tail,Node* &head,int position, int d){

        //inserting at start postion
        if(position==1){
           insertAtHead(head,d);
           return; 
        }
        //inserting at middle position
       Node* temp=head;
       int cnt=1;
       while(cnt<position-1){
        temp=temp->next;
        cnt++;
       }
       //inserting at last position (updating tail)
       if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
       }

       //creating node for d
       Node*nodeToInsert=new Node(d);

       nodeToInsert->next=temp->next;
       temp->next->prev=nodeToInsert;
       temp->next=nodeToInsert;
    }


int main(){
    Node*node1=new Node(10);
    Node*head=node1;
    Node*tail=node1;

    print(head);
    cout<<getLength(head)<<endl;

    insertAtHead(head,11);
    print(head);

    insertAtHead(head,13);
    print(head);

    insertAtHead(head,8);
    print(head);

    insertAtTail(tail,25);
    print(head);

    insertAtPosition(tail,head,2,100);
    print(head);

     insertAtPosition(tail,head,1,101);
    print(head);

     insertAtPosition(tail,head,8,102);
    print(head);

    return 0;
}*/

/*
//correction
#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d ) {
        this-> data = d;
        this->prev = NULL;
        this->next = NULL;
    }

};

//traversing a linked list
void print(Node* head) {
    Node* temp  = head ;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp  = temp -> next;
    }
    cout << endl;
}

//gives length of Linked List
int getLength(Node* head) {
    int len = 0;
    Node* temp  = head ;

    while(temp != NULL) {
        len++;
        temp  = temp -> next;
    }

    return len;
}
void insertAtHead(Node* &tail, Node* &head, int d) {

    //empty list
    if(head == NULL) {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }

}


void insertAtTail(Node* &tail,Node* &head, int d) {
    if(tail == NULL) {
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(d);
        tail -> next  = temp;
        temp -> prev = tail;
        tail = temp;
    }

}

void insertAtPosition(Node* & tail, Node* &head, int position, int d) {
    
    //insert at Start
    if(position == 1) {
        insertAtHead(tail,head, d);
        return;
    }

    Node* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp -> next == NULL) {
        insertAtTail(tail,head,d);
        return ;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert ->next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}

int main() {


    Node* head = NULL;
    Node* tail = NULL;

    print(head);
    //cout << getLength(head) << endl;

    insertAtHead(tail,head, 11);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtHead(tail,head, 13);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtHead(tail,head, 8);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtTail(tail,head, 25);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtPosition(tail, head, 2, 100);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtPosition(tail, head, 1, 101);
    print(head);

    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtPosition(tail, head, 7, 102);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;
    return 0;
}*/

/*
//Deletion of node
#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d ) {
        this-> data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node() {
        int val = this -> data;
        if(next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data "<< val << endl;
    }
};

//traversing a linked list
void print(Node* head) {
    Node* temp  = head ;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp  = temp -> next;
    }
    cout << endl;
}

//gives length of Linked List
int getLength(Node* head) {
    int len = 0;
    Node* temp  = head ;

    while(temp != NULL) {
        len++;
        temp  = temp -> next;
    }

    return len;
}
void insertAtHead(Node* &tail, Node* &head, int d) {

    //empty list
    if(head == NULL) {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }

}


void insertAtTail(Node* &tail,Node* &head, int d) {
    if(tail == NULL) {
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(d);
        tail -> next  = temp;
        temp -> prev = tail;
        tail = temp;
    }

}

void insertAtPosition(Node* & tail, Node* &head, int position, int d) {
    
    //insert at Start
    if(position == 1) {
        insertAtHead(tail,head, d);
        return;
    }

    Node* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp -> next == NULL) {
        insertAtTail(tail,head,d);
        return ;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert ->next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}

void deleteNode(int position, Node* & head) { 

    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp ->next;
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        delete curr;

    }
}



int main() {


    Node* head = NULL;
    Node* tail = NULL;

    print(head);
    //cout << getLength(head) << endl;

    insertAtHead(tail,head, 11);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtHead(tail,head, 13);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtHead(tail,head, 8);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtTail(tail,head, 25);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtPosition(tail, head, 2, 100);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtPosition(tail, head, 1, 101);
    print(head);

    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtPosition(tail, head, 7, 102);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    deleteNode(6, head);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    return 0;
}*/


/*
//Circular linked list

//Insertion and traversal
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    //constructor
    Node(int d){
        this->data=d;
        this->next=NULL;
    }

    //Destructor
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Memory is free for node with data:"<<value<<endl;
    }
};

void insertNode(Node* &tail,int element,int d){

    //empty list
    if(tail==NULL){
        Node* newNode=new Node(d);
        tail=newNode;
        newNode->next=newNode;
    }
    else{
        //non empty list
        //assumong that the element is present in the list
        Node*curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }

        //element found->current is representing element wala node
        Node*temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}

void print(Node* tail){
    Node* temp=tail;

    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    } while(tail!=temp);
    cout<<endl;
}

int main(){

    Node* tail=NULL;

    //inserting in empty list
    insertNode(tail,5,3);
    print(tail);

    insertNode(tail,3,5);
    print(tail);

    insertNode(tail,5,7);
    print(tail);

    insertNode(tail,7,9);
    print(tail);

    insertNode(tail,5,6);
    print(tail);

    insertNode(tail,9,10);
    print(tail);

    insertNode(tail,3,4 );
    print(tail);


    return 0;
}*/


//Deletion
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    //constructor
    Node(int d){
        this->data=d;
        this->next=NULL;
    }

    //Destructor
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Memory is free for node with data:"<<value<<endl;
    }
};

void insertNode(Node* &tail,int element,int d){

    //empty list
    if(tail==NULL){
        Node* newNode=new Node(d);
        tail=newNode;
        newNode->next=newNode;
    }
    else{
        //non empty list
        //assumong that the element is present in the list
        Node*curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }

        //element found->current is representing element wala node
        Node*temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}

void print(Node* tail){
    Node* temp=tail;

    //empty list
    if(tail==NULL){
        cout<<"List is empty"<<endl;
        return;
    }

    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    } while(tail!=temp);
    cout<<endl;
}

void deleteNode(Node* &tail,int value){

    //empty list
    if(tail==NULL){
        cout<<"List is empty, please check again"<<endl;
        return;
    }
    else{
        //non empty
        //assuming that value is present in linked list
        Node*prev=tail;
        Node*curr=prev->next;

        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }

        prev->next=curr->next;

        //1 node linked list
        if(curr==prev){
            tail=NULL;
        }

        //greater than or equal to two linked list
        else if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
}

int main(){

    Node* tail=NULL;

    //inserting in empty list
    insertNode(tail,5,3);
    print(tail);

    insertNode(tail,3,5);
    print(tail);
/*
    insertNode(tail,5,7);
    print(tail);

    insertNode(tail,7,9);
    print(tail);

    insertNode(tail,5,6);
    print(tail);

    insertNode(tail,9,10);
    print(tail);

    insertNode(tail,3,4 );
    print(tail);*/

    deleteNode(tail,3);
    print(tail);

    return 0;
}
