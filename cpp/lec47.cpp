//Detect and remove loop in linked list
#include<bits/stdc++.h>
#include<map>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    //Constructor 
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    //Destructor 
    ~Node(){
        int value = this->data;
        //memory free
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};
    
    void insertAtHead(Node* &head,int d){
        Node* temp = new Node(d);
        temp->next = head;
        head = temp;
    }
    void insertAtTail(Node* &tail,int d){
        Node* temp = new Node(d);
        tail->next = temp;
        tail = temp;//or tail=tail->next; both are same
    }

    void print(Node* &head){
        //for checking that list is empty
        if(head==NULL){
            cout<<"list is empty"<<endl;
            return;
        }
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

    void insertAtPosition(Node* &tail, Node* &head,int position,int d){
        //insert at start
        if(position==1){
            insertAtHead(head,d);
            return;
        }

        Node* temp = head;
        int cnt = 1;
        while(cnt < position-1){
  temp=temp->next;
            cnt++;
        }

        //insert at last
        if(temp->next==NULL){
            insertAtTail(tail,d);
            return ;
        }
        Node* nodeToInsert = new Node(d);
        nodeToInsert->next=temp->next;
        temp->next=nodeToInsert;
    }

    void deleteNode(int position,Node* &head){
        //deleting first or start node
        if(position==1){
            Node*temp=head;
            head=head->next;
            //memory free start node
            temp->next = NULL;
            delete temp;
        }
        else{
            //deleting any middle node or last node
            Node* curr  = head;
            Node* prev = NULL;

            int cnt = 1;
            while(cnt<position){
                prev = curr;
                curr = curr->next;
                cnt++;
            }
            prev->next=curr->next;
            curr->next=NULL;
            delete curr;
        }
    }
    //to check wheter the linked list is circular or not
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
 //Check there is loop in the list or not 
    bool detectLoop(Node* head){
    if(head==NULL){
        return false;
    }
    map<Node*,bool> visited;
    Node* temp=head;
    while(temp!=NULL){
        //cycle is present
        if(visited[temp]==true){
            cout<<"present on element "<<temp->data<<endl;
            return true;
        }
        visited[temp]=true;
        temp=temp->next;
    }
    return false;
    }
    //Floyd cycle detection algorithm to detect loop in linked list
    Node* floydDetectLoop(Node* head){
        if(head==NULL){
            return NULL;
        }
        Node* slow = head;
        Node* fast = head;
        while(slow!=NULL && fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
            }
            slow=slow->next;
           if(slow==fast){
                cout<<"present at "<<slow->data<<endl;
                return slow;
            }
        }
        return NULL;
    }
    //Finding starting node of loop in linked list
    Node* getStartingNode(Node* head){
        if(head==NULL){
            return NULL;
        }
        Node* intersection=floydDetectLoop(head);
        Node* slow = head;
        while(slow!=intersection){
            slow=slow->next;
            intersection=intersection->next;
        }
        return slow;
    }

    //Removing loop from linked list
    void removeLoop(Node* head){
        if(head==NULL){
     return;
        }
        Node* startOfLoop=getStartingNode(head);
        Node* temp = startOfLoop;
        while(temp->next!=startOfLoop){
            temp = temp->next;
        }
        temp->next=NULL;
    }
int main(){
    Node* node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    Node* head = node1;
    Node* tail = node1;

// for cheking that list is epmty or not 
    // Node* head = NULL;
    // Node* tail = NULL;
     //print(head);

    //insertAtHead(head,12);//used for inserting at head
    insertAtTail(tail,12); //Used for inserting at tail
    print(head);
    insertAtTail(tail,15);
    print(head);
 insertAtPosition(tail,head,4,20);
    print(head);
    insertAtPosition(tail,head,5,200);
    print(head);
    tail->next = head->next;
    cout<<"Head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl;
//    deleteNode(4,head);
//     print(head);

   /* //to check wheter the linked list is circular or not
    if(isCircularList(head)){
        cout<<"linked list is circular"<<endl;
    }
    else{
        cout<<"linked list is not circular"<<endl;
    }*/
    if(floydDetectLoop(head)!=NULL){
        cout<<"loop is present"<<endl;
    }
    else{
        cout<<"loop is not present"<<endl;
    }


    Node* loop = getStartingNode(head);
    cout<<"Loops start at "<<loop->data<<endl;

    removeLoop(head);
    print(head);

    return 0; 
}