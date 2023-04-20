/*
//Reverse string(using recursion)
#include<iostream>
using namespace std;
void reverse(string &str,int i,int j){
    cout<<"call received for:"<<str<<endl;
    //base case
    if(i>j){
        return;
    }
    swap(str[i],str[j]);
    i++;
    j--;
    //recursive call
    reverse(str,i,j);
}
int main(){
    string name="abcde";
    reverse(name,0,name.length()-1);
    cout<<name<<endl;
    return 0;
}*/
/*
//check palindrome(using recursion)
#include<iostream>
using namespace std;
bool checkPalindrome(string str,int i,int j){
    //base case
    if(i>=j){
        return true;
    }
    if(str[i]!=str[j]){
        return false;
    }
    else{
    //recursive call
     return checkPalindrome(str,i+1,j-1);
    }
}
int main(){
    string name="WaaW";
    int ans=checkPalindrome(name,0,name.length()-1);
    cout<<ans<<endl;
    if(ans){
        cout<<"It is palindrome"<<endl;
    }
    else{
        cout<<"It is not palindrome"<<endl;
    }
    return 0;
}*/
/*
//calculating power using recursion
#include<iostream>
using namespace std;
int power(int a,int b){
    //base case
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    //recursive call
    int ans=power(a,b/2);
    // if b is even
    if(b%2==0){               
      return ans*ans;        //if we have to find a^b and if b is even we can write as (a^b/2)*(a^b/2).Ex 2^8=>> (2^4)*(2^4)=(2^4)^2
    }
    else{
    // if b is odd
        return a*ans*ans;     // if we have to find a^b and if b is odd then we can write as (a)*(a^b/2)*(a^b/2).Ex 2^9=>>2*(2^4)*(2^4)=2*(2^4)^2
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    int ans=power(a,b);
    cout<<"Answer is:"<<ans<<endl;
    return 0;
}*/

//Bubble sort using recursion
#include<iostream>
using namespace std;
void sortArray(int arr[],int n){
    //base case
    if(n==0 || n==1){       //array is already sorted
        return;
    }
    //largest element ko end me rakh dega 
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    //recursive call
    sortArray(arr,n-1);
}
int main(){
   int arr[5]={3,0,5,1,8};
   sortArray(arr,5);
   for(int i=0;i<5;i++){
    cout<<arr[i]<<endl;
   }
   return 0;
}