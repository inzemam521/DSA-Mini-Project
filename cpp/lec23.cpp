/*
#include<iostream>
using namespace std;
int main(){
    //create 2-d array
int arr[3][4];
//int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};          //intialising array 
//int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12};     //intialising array {(1st row 1,2,3,4),2nd row(5,6,7,8),3rd row(9,10,11,12)}
//taking input row wise
for(int i=0;i<3;i++){         //here i is row and j is column
    for(int j=0;j<4;j++){
        cin>>arr[i][j];
    }
}
/*
//taking input column wise
for(int i=0;i<4;i++){          //here i is column and j is row
    for(int j=0;j<3;j++){
        cin>>arr[j][i];
    }
}*//*
//print
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}
*/

/*
//searching element
#include<iostream>
using namespace std;
bool isPresent(int arr[][4],int target,int i,int j){
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        if(arr[i][j]==target){
            return 1;
        }
    }
}
return 0;
}
int main(){
int arr[3][4];
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cin>>arr[i][j];
    }
}

for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
cout<<"Enter the element to search:"<<endl;
int target;
cin>>target;
    if(isPresent(arr,target,3,4)){
        cout<<"Element is found:"<<endl;
    }
    else{
        cout<<"Element is not found:"<<endl;
    }
return 0;
}*/

/*
//finding row wise sum
#include<iostream>
using namespace std;
void printSum(int arr[][4],int i,int j){
    cout<<"Printing the sum:"<<endl;
    for(int row=0;row<3;row++){
        int sum=0;
    for(int col=0;col<4;col++){
        sum+=arr[row][col];
    }
    cout<<sum<<" ";
}
cout<<endl;
}
int main(){
int arr[3][4];
cout<<"Enter the element:"<<endl;
for(int row=0;row<3;row++){
    for(int col=0;col<4;col++){
        cin>>arr[row][col];
    }
}
cout<<"Printing the array:"<<endl;
for(int row=0;row<3;row++){
    for(int col=0;col<4;col++){
        cout<<arr[row][col]<<" ";
    }
    cout<<endl;
}
printSum(arr,3,4);
return 0;
}
*/
/*
//finding col wise sum
#include<iostream>
using namespace std;
void printSum(int arr[][4],int row,int col){
    cout<<"Printing the sum:"<<endl;
    for(int col=0;col<4;col++){
    int sum=0;
    for(int row=0;row<3;row++){
        sum+=arr[row][col];
    }
    cout<<sum<<" ";
}
cout<<endl;
}
int main(){ 
int arr[3][4];
cout<<"Enter the element:"<<endl;
for(int col=0;col<4;col++){
    for(int row=0;row<3;row++){
        cin>>arr[row][col];
    }
}
cout<<"Printing the array:"<<endl;
for(int row=0;row<3;row++){
    for(int col=0;col<4;col++){
        cout<<arr[row][col]<<" ";
    }
    cout<<endl;
}
printSum(arr,3,4);             
return 0;
}
*/
/*
//Finding largest row (sum wise)
#include<iostream>
using namespace std;
int largestRowSum(int arr[][4],int row,int col){
    int max=0;
    int  rowIndex=0;
     for(int row=0;row<3;row++){
        int sum=0;
    for(int col=0;col<4;col++){
        sum+=arr[row][col];
    }
    if(sum>max){
        max=sum;
        rowIndex=row;
    }
}
cout<<"The maximum sum is:"<<max<<endl;
return rowIndex;
}
int main(){
int arr[3][4];
cout<<"Enter the element:"<<endl;
for(int row=0;row<3;row++){
    for(int col=0;col<4;col++){
        cin>>arr[row][col];
    }
}
cout<<"Printing the array:"<<endl;
for(int row=0;row<3;row++){
    for(int col=0;col<4;col++){
        cout<<arr[row][col]<<" ";
    }
    cout<<endl;
}
int ansIndex=largestRowSum(arr,3,4);
cout<<"Max row is at index:"<<ansIndex<<endl;
return 0;
}
*/

//