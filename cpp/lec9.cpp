/*#include<iostream>
using namespace std;
int main(){
	int number[15];
    cout<<"value at 5 index"<<" "<<number[5]<<endl;           // value can be any random no.
	//cout<<"value at 100 index"<<" "<<number[100]<<endl;    this will through error bcz array size is only 15 and we can get value till 14th index 
	//intialising array
	int second[4]={3,4,1,2};
	cout<<"value at index 2 is"<<" "<<second[2]<<endl;
	int third[15]={2,7};
	//printing the array of size 15 
	int n=15;
	cout<<"Printing the array"<<endl;
	int i=0;
	for(i=0;i<n;i++){
		cout<<third[i]<<" ";
	}
	
	int fourth[10]={0};
	n=10;
	cout<<"Printing the array"<<endl;
	i=0;
	for(i=0;i<n;i++){
		cout<<fourth[i]<<" ";
	}
	//initialising all location with 1[not possible with below line]
	int fifth[7]={1};
    n=7;
    	cout<<"Printing the array"<<endl;
	i=0;
	for(i=0;i<n;i++){
		cout<<fifth[i]<<" ";
	}
	//initialising all location with one 
	int sixth[10];
	fill_n(sixth,10,1);
		cout<<"Printing the array"<<endl;
	i=0;
	for(i=0;i<n;i++){
		cout<<sixth[i]<<" ";
	}
	cout<<endl<<"Everything is ok"<<endl<<endl;
	return 0;
}
*/

/*
#include<iostream>
using namespace std;
void printArray(int arr[],int size){
	int i=0;
	for(i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"Printing is done"<<endl;
	}
	int main(){
	int first[10]={2,4};
	printArray(first,10);
	
	int second[12]={0};
	printArray(second,12);
	
	int secondsize=sizeof(second)/sizeof(int);
	cout<<"Size of second is"<<secondsize<<endl;
	
	char ch[5]={'a','b','c','d','e'};
	cout<<ch[3]<<endl;
	int i=0;
	int size=5;
	for(i=0;i<size;i++){
		cout<<ch[i]<<" ";
	}
	cout<<"Everything is ok"<<endl;
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
//finding maximum and minimum element of array
int getMax(int num[],int size){
	int max=INT_MIN;           //changing name int max to int maxi to understand prededined function to find min max
	int i=0;
	for(i=0;i<size;i++){
		if(num[i]>max){        //predefined function to find max:- maxi=max(maxi,num[i]);         
		max=num[i];            // we can directly use above function in place of if(num[i]>max){  max=num[i]; to find max element of array
	}
}
return max;
}
int getMin(int num[],int size){
int min=INT_MAX;
int i=0;
for(i=0;i<size;i++){
	if(num[i]<min){    
		min=num[i];
	}
}
return min;
}
int main(){
	int size;
	cin>>size;
	int num[100];
	int i=0;
	for(i=0;i<size;i++){
		cin>>num[i];
	}
	cout<<"Max of num is "<<getMax(num,size)<<endl;
	cout<<"Min of num is"<<getMin(num,size)<<endl;
}
*/
/*
#include<iostream>
using namespace std;
int main(){                     //printing sum of all element in an array
	int arr[5]={15,4,2,1,8};
	int size=5;
	                              // cout<<"Enter the size of array"<<endl;
                                  //cin>>size>>size>>size>>size>>size;
	int i=0;+){
		cout<<arr[i]<<" "<<endl;
	}
	for(i=0;i<size;i+
	int sum=0;
    i=0;
	for(i=0;i<size;i++){
			sum=sum+arr[i];
	//	cout<<sum<<" ";
	}
	cout<<"Sum is "<<sum; 
	return 0;
} 
*/
/*
         //printing sum af all element in an array using function
         int sumArray(int arr[],int size){
         	int sum=0;
         	int i=0;
         	for(i=0;i<size;i++){
         		sum=sum+arr[i];
			 }
			 return sum;
		 }
		 int main(){
		 	int arr[5]={3,5,7,9,11};
		 	int size=5;
		 	cout<<"Sum is "<<sumArray(arr,size);
		 }
*/
/*
bool search(int arr[],int size,int key){       //linear search
	int i=0;
	for(i=0;i<size;i++){
		if(arr[i]==key){
			return 1;
		}
	}
	return 0;
}
		
int main(){
	int arr[5]={2,4,6,-3,100};
	int key;
	cout<<"Enter the value of key"<<endl;
	cin>>key;
	bool found=search(arr,5,key);
	if(found){
		cout<<"Key is present"<<endl;
	}
		else{
			cout<<"Key is absent"<<endl;
		}
	return 0;
}
*/
/*
void reverse(int arr[],int size){
	int start=0;
	int end=size-1;
	while(start<=end){
		swap(arr[start],arr[end]);
		start++;
		end--;
	}	
}

void printArray(int arr[],int size){
	int i=0;
	for(i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int arr[5]={1,-2,3,4,5};
	int brr[4]={9,8,7,6};
	
	reverse(arr,5);
	reverse(brr,4);
	
	//printArray(arr,5);
	//printArray(brr,4);
	
	return 0;	
}
*/
