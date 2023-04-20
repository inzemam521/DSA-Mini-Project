/*#include<iostream>
using namespace std;
int main(){           //reversing array
	int n;             
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
		int s=0;
		int e=n-1;
		while(s<=e){
			swap(arr[s], arr[e]);
			s++;
			e--;
		}
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
		return 0;
	}
	*/

//Reversing array using stl
/*
#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v){
		int s=0;
		int e=v.size()-1;
		while(s<=e){
			swap(v[s], v[e]);
			s++;
			e--;
		}
		return v;
	}
	void print(vector<int> v){
		
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	}
int main(){
	vector<int> v;
	v.push_back(3);
	v.push_back(5);
	v.push_back(9);
	v.push_back(11);
	v.push_back(4);
	
	vector<int> ans=reverse(v);
	cout<<"Printing the reverse array:"<<endl;
	print(ans);

	return 0;
}
*/
/*
//Merge two sorted array
#include<iostream>
#include<vector>
using namespace std;
void merge(int arr1[],int n, int arr2[], int m,int arr3[]){
	int i=0;
	int j=0;
	int k=0;
	while(i<n &&j<m){
		if(arr1[i]<arr2[j]){
			arr3[k]=arr1[i];
			k++;
			i++;
		}
		else{
			arr3[k]=arr2[j];
			k++;
			j++;
		}
	}
		while(i<n){      //copying remaining element of 1st array to merge array 
			arr3[k]=arr1[i];
			k++;
			i++;
		}
		while(j<m){     //copying remaining element of 2nd array to merge array 
			arr3[k]=arr2[j];
			k++;
			j++;
		} 
}
void print(int ans[], int n){
	for(int i=0;i<n;i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
}
int main(){
    int arr1[4]={3,6,9,11};
    int arr2[3]={1,8,14};
    int arr3[7]={0};
    
    merge(arr1,4,arr2,3,arr3);
    print(arr3,7);
    return 0;
}*/

	
