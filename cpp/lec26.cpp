/*#include<iostream>
using namespace std;
int main(){
/*
	int arr[10]={2,5,6};
	cout<<"Address of first memory block is:"<<arr<<endl;            //address of array of location zero
	cout<<"Address of first memory block is:"<<&arr[0]<<endl;       //address of array of location zero
	
	cout<<"value at zeroth index:"<<*arr<<endl;
	cout<<*arr+1<<endl;
	cout<<"Value at first location:"<<*(arr+1)<<endl;              //value at first location
}
*/
/*
    int arr[10]={23,122,41,67};
    cout<<arr[2]<<endl;
    cout<<*(arr+2)<<endl;                           //same as above
                         //arr[i]=*(arr+i)====i[arr]=*(i+arr)
    
    int i=3;
    cout<<i[arr]<<endl;
    
    int temp[10];
    cout<<sizeof(temp)<<endl;
    
    int *ptr=&temp[0];
    cout<<"1st:"<<sizeof(ptr)<<endl;               //address   (8byte)
     cout<<"2nd:"<<sizeof(*ptr)<<endl;            //value present at that address  (4byte)
     cout<<"3rd:"<<sizeof(&ptr)<<endl;            // address  (8byte)
     
  int arr[10];
  int *ptr=&arr[0];
  ptr=ptr+1;
  cout<<"4th:"<<ptr<<endl;
   */   
/*   
   //character array
   int arr[5]={1,2,3,4,5};
   char ch[6]="abcde";
   //implemention of cout in case of integer array and character array is different
   cout<<"1st:"<<arr<<endl;                //print address of zeroth index
   cout<<"2nd:"<<ch<<endl;                //print entire content(string) 
   char *c=&ch[0];
   cout<<"3rd:"<<c<<endl;                 //print entire string
  */ 
  /*
   char temp='z';
   char *p=&temp;
   cout<<"1st:"<<p<<endl;
   
    return 0;
}
*/

     //Using pointer in function
#include <iostream>
using namespace std;
/*
void print(int *p){
	cout<<*p<<endl;
	
}
void update(int *p){
*p=*p+1;
}
*/
int getsum(int arr[], int n){       //function me array pass krenge to array as a pointer jata hai isley pointer ka size print hoga array ka nhi (so size will be 8)
	cout<<"size:"<<sizeof(arr)<<endl;
	int sum=0;
	int i=0;
	for(i=0;i<n;i++){
		sum=sum+arr[i];
	}
	return sum;
}
int main(){
	/*
	int value=5;
	int *p=&value;
	cout<<"Before:"<<*p<<endl;
	update(p);
	cout<<"After:"<<*p<<endl;
	*/
	int arr[5]={1,2,3,4,5};
	
	cout<<"1st sum is:"<<getsum(arr,5)<<endl;
	cout<<"2nd sum is:"<<getsum(arr+3,2)<<endl;       //it will give the sum of last two no and exclude first 3 no(4+5=9)
	cout<<"3rd sum is:"<<getsum(arr+2,2)<<endl;       //(3+4=7) excluding first two no and adding two no after that 
	
	return 0;
}
