/*#include<iostream>
using namespace std;
void reachHome(int src,int dest){
   cout<<"source:"<<src<<" "<<"destination:"<<dest<<endl;
    if(src==dest){
        cout<<"Pahuch gaya"<<endl;           //moving 10 step ahead from source to reach destination
        return;
    }
    //processing one step ahead
    src++;
    //recursive call
    reachHome(src,dest);
}
int main(){
    int dest=10;
    int src=1;
    reachHome(src,dest);
    return 0;
} */
/*
//finding fibonnacci no of series
#include<iostream>
using namespace std;
int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int ans=fib(n-1)+fib(n-2);     //f(n) is nth term of fibonacci series 
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}*/

//say digit
#include<iostream>
using namespace std;
void sayDigit(int n,string arr[]){
    //base case
    if(n==0){
        return;
    }
    //processing
    int digit=n%10;
    n=n/10;
    //recursive call
    sayDigit(n,arr);
    cout<<arr[digit]<<" ";
}
int main(){
    string arr[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    int n;
    cin>>n;
    sayDigit(n,arr);

}
