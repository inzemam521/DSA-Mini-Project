/*
#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main(){
    //creation of stack
    stack<int> s;   
    //push operation
    s.push(2);
    s.push(5);
    //pop operation
    s.pop();

    cout<<"printing top element:"<<s.top()<<endl;

    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
   cout<<"size of stack is:"<<s.size()<<endl;
    return 0;
}*/

//Implementation of stack(stack class)
#include<bits/stdc++.h>
#include<stack>
using namespace std;

class Stack{
    //properties
    public:
    int *arr;
    int top;
    int size;
    //behaviour
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push(int element){
        if(size-top>1) {         //atleast one empty space is available
        top++;
        arr[top]=element;
        } 
        else{
        cout<<"stack overflow"<<endl;
        }
    }
    void pop(){
    if(top>=0){
        top--;
    }
    else{
    cout<<"stack underflow"<<endl;
    }
    }
    int peek(){
        if(top>0){
            return arr[top];
        }
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
         return false;
        } 
    }
};

int main(){

    Stack st(3);
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);

    cout<<"Top of the stack:"<<st.peek()<<endl;

    st.pop();
    cout<<"Top of the stack:"<<st.peek()<<endl;

    st.pop();
    cout<<"Top of the stack:"<<st.peek()<<endl;

    st.pop();
    cout<<"Top of the stack:"<<st.peek()<<endl;

    if(st.isEmpty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
}