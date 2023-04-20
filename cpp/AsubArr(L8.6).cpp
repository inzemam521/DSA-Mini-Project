/*#include<iostream>
using namespace std;
int main(){
	int n;        //printing subarray
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			for(int k=i;k<=j;k++){
				cout<<arr[k]<<" ";
			}
				cout<<endl;
		}
	}
	return 0;
}
*/

// Maximum subarray sum problem
#include<iostream>
using namespace std;
int main(){
	int n;        
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	/*
	int maxSum=INT_MIN;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int sum=0;
			for(int k=i;k<=j;k++){
				sum+=arr[k];
			}
			maxSum=max(maxSum,sum);
		}
	}
	cout<<"Maximum sum is:"<<maxSum<<endl;
	return 0;
}
*/
//Maximum subarray sum using cumulative sum approach to reduce time complexity

