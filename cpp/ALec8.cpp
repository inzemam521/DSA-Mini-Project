 //8.1

#include<iostream>
using namespace std;
int main(){         
	int n;        	//taking input from user side in array and printing
	cin>>n;
	
	int arr[n];
	int i=0;
	for(i=0; i<n;i++){
		cin>>arr[i];
	}
	for(i=0; i<n;i++){
		cout<<arr[i]<<" ";
	}
		return 0;
	}
	
	//printing max and min element from array
	
/*#include<iostream>
//#include<climits>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int arr[n];
	int i=0;
	for(i=0; i<n;i++){
		cin>>arr[i];
	}
	
	int maxNo=INT_MIN;
	int minNo=INT_MAX;
	for(i=0;i<n;i++){
	/*	if(arr[i]>maxNo){
		maxNo=arr[i];
	}
	if(arr[i]<minNo){
		minNo=arr[i];
	}*/
	//other mathod
/*	maxNo=max(maxNo,arr[i]);
	minNo=min(minNo,arr[i]);
}
	cout<<maxNo<<" "<<minNo<<endl;
	return 0;
}*/

//8.2
/*#include<iostream>
us0ing namespace std;
/*
int linearSearch(int arr[],int n,int key){             //linear search       
	int i=0;
	for(i=0;i<n;i++){
	if(key==arr[i]){
		return i;
	}
}
	return-1;
}
int main(){
	int n;
	cin>>n ;
	int arr[n];
	int i=0;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	int key;
	cin>>key;
	cout<<linearSearch(arr,n,key)<<endl;
}
*/
/*int binarySearch(int arr[],int n, int key){            //binary search
	int s=0;
	int e=n-1;
	while(s<=e){
	int	mid=(s+e)/2;
		if(arr[mid]==key){
			return mid;
		}
				else if(arr[mid]>key){
					e=mid-1;
				}
				else{
					s=mid+1;
				}
	}
	return -1;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	int i=0;
	for(i=0;i<n;i++){
		cin>>arr[i];	
	}
	int key;
	cin>>key;
	cout<<binarySearch(arr,n,key)<<endl;
	return 0; 
}*/

 //8.3.1 selection sort{1st element ko last se swap krte h(first>last) fir 2nd ko last se fir 3 ko last se till array is not sorted 
     
/*int main(){
	int n;
	cin>>n;
	int arr[n];
	int i=0;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	int j=0;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[i]){
				int temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
*/
// 8.3.2 Bubble sort(swap two adjacent element if they are in wrong order)
/*
int main(){
	int n;
	cin>>n;
	int arr[n];
	int i=0;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	int counter=1;
	while(counter<n-1){
		int i=0;
		for(i=0;i<n-counter;i++){
		if(arr[i]>arr[i+1]){
			int temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	}
	counter ++;
}
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
*/  

//8.3.3 Insertion sort(Insert element from unsorted array to its correct position in sorted array)1st element ko man lenge sorted h fir 2nd element se start krenge aur usko correct position pe le jayenge
/*int main(){
	int n;
	cin>>n;
	int arr[n];
	int i=0;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=1;i<n;i++){
	int current=arr[i];
	int j=i-1;
	while(arr[j]>current &&j>=0){
		arr[j+1]=arr[j];
		j--;
	}
	arr[j+1]=current;
}
for(i=0;i<n;i++){
	cout<<arr[i]<<" ";
}
   cout<<endl;
   return 0;
}
*/
