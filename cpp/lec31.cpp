//finding factorial
/*
#include<iostream>
using namespace std;
int factorial(int n){
    //base case
   if(n==0){
    return 1;
   }
   /* int smallerProblem=factorial(n-1);
    int biggerProblem=n*smallerProblem;
    return biggerProblem;
    */
   /*
   return n*factorial(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}*/
/*
//finding power(2^n)
#include<iostream>
using namespace std;
int power(int n){
    //base case
    if(n==0){
        return 1;
    }
    int smallProblem=power(n-1);
    int bigProblem=2*power(n-1);
    return 2*power(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<power(n)<<endl;
}
*/

//print counting
#include<iostream>
using namespace std;
/*
void print(int n){
    //base case
    if(n==0){
        return;
    }
    cout<<n<<endl;
    //recursive relation(rr)
    print (n-1);                //tail recursion bcz rr sabse niche hai....output=(Ex:5->>5,4,3,2,1)
}
int main(){
    int n;
    cin>>n;
   print(n);
    return 0;
}*/

void print(int n){
    //base case
    if(n==0){
        return;
    }
    //recursive relation(rr)
    print (n-1);                //head recursion bcz rr processing ke upper hai....output=(Ex:5->>1,2,3,4,5)
    cout<<n<<endl;       //processing
}  
int main(){
    int n;
    cin>>n;
   print(n);
    return 0;
}
