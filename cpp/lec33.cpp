/*
//Is array sorted(using recursion)
#include<iostream>
using namespace std;
bool isSorted(int arr[],int size){
    //base case
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    /*else{
        bool remainingPart=isSorted(arr+1,size-1);
        return remainingPart;
    }*/
  /*  
    isSorted(arr+1,size-1);
}
int main(){
    int arr[5]={2,5,7,1,11};
    int size=5;
   bool ans=isSorted(arr,size);
   cout<<ans<<endl;
    if(ans){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
    return 0;
}
*/
/*
//sum of Array using recursion
#include<iostream>
using namespace std;
int getSum(int arr[],int size){
    if(size==0){
    return 0;
    }
    if(size==1){
        return arr[0];
    }
    int remainingPart=getSum(arr+1,size-1);
    int sum=arr[0]+remainingPart;
    return sum;
}
int main(){
    int arr[5]={14,6,8,2,5};
    int size=5;
    int sum=getSum(arr,size);
    cout<<"Sum is:"<<sum<<endl;
    return 0;
}*/
/*
//Linear search(using recursion)
#include<iostream>
using namespace std;
void print(int arr[],int n){
    cout<<"Size is of array is:"<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
bool linearSearch(int arr[],int size,int key){
    print(arr,size);
    if(size==0){
        return 0;
    }
    if(arr[0]==key){
        return 1;
    }
    else{
        bool remainingPart=linearSearch(arr+1,size-1,key);
        return remainingPart;
    }
}
int main(){
    int arr[5]={3,5,1,2,6};
    int size=5;
    int key=1;
    bool ans=linearSearch(arr,size,key);
    if(ans){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Not present"<<endl;
    }
    return 0;
}*/

//Binary search(using recursion)
#include<iostream>
using namespace std;
void print(int arr[],int s,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<endl;
    }
}
bool binarySearch(int arr[], int s,int e,int key){
    cout<<endl;
    print(arr,s,e);
    //base case->element not found
    if(s>e){
        return false;
    }
    int mid=(s+e)/2;
    cout<<"Value of arr mid is:"<<arr[mid]<<endl;
    //element found
    if(arr[mid]==key){
        return true;
    }
    if(arr[mid]<key){
        return binarySearch(arr,mid+1,e,key);
    }
    else{
        return binarySearch(arr,s,mid-1,key);
    }

}
int main(){
    int arr[6]={2,4,6,10,14,18};
    int size=6;
    int key=2;
    cout<<"Present or not:"<<binarySearch(arr,0,5,key);
    return 0;
}