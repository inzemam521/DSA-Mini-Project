//Merge sort using recursion (error in this code)
#include<iostream>
using namespace std;
void merge(int arr[],int s,int e){
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int *first=new int[len1];
     int *second=new int[len2];
     //copying value
     int mainArrayIndex=s;
     for(int i=0;i<len1;i++){
        first[i]=arr[mainArrayIndex++];
     }
     mainArrayIndex=mid+1;
     for(int i=0;i<len2;i++){
        second[i]=arr[mainArrayIndex++]; 
     }
     //merge two sorted arrays
     int index1=0;
     int index2=0;
     mainArrayIndex=s;
     while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainArrayIndex++]=first[index1++];
        }
        else{
           arr[mainArrayIndex++]=second[index2++]; 
        }
     }
     while(index2<len2){
        arr[mainArrayIndex++]=first[index1++];
     }
}
void mergeSort(int arr[],int s,int e){
    //base case
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;
    //sorting left part
    mergeSort(arr,s,mid);
    //sorting right part
    mergeSort(arr,mid+1,e);
    //merge both part
    merge(arr,s,e);
}
int main(){
    int arr[5]={8,0,5,10,2};
    int n=5;
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}