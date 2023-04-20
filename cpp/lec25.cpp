#include<iostream>
using namespace std;
int main(){
	int num=5;
	cout<<num<<endl;
	cout<<"Address of num is:"<<&num<<endl;
	int *ptr=&num;
	cout<<*ptr<<endl;
	cout<<ptr<<endl;
	
	double d=4.3;
	double *p2=&d;
	cout<<"The value is:"<<*p2<<endl;
	cout<<"The address is:"<<p2<<endl;
	
    cout<<"Size of integer:"<<sizeof(num)<<endl;
    cout<<"Size of pointer:"<<sizeof(ptr)<<endl;
    cout<<"Size of pointer:"<<sizeof(p2)<<endl;
}

/*
#include<iostream>
using namespace std;
int main(){
/*	int i=5;
//	int *p=&i==int *p=0; p=&i;
    int *p=0;
	p=&i;
	cout<<"Address is:"<<p<<endl;
	cout<<"Address is:"<<*p<<endl;
	
	int *q=&i;
	cout<<"Address is:"<<p<<endl;
	cout<<"Address is:"<<*p<<endl;
}
*//*
     int num=5;
     int a=num;
      cout<<" a Before:"<<num<<endl;
     a++;
      cout<<" a After:"<<num<<endl;
     int *p=&num;
     cout<<"Before:"<<num<<endl;
     (*p)++;
     cout<<"After:"<<num<<endl;
    
    //copying a pointer
     int *q=p;
     cout<<p<<"-"<<q<<endl;
     cout<<*p<<"-"<<*q<<endl;
     
     //important concept
     int i=3;
     int *t=&i;
     //cout<<(*t)++<<endl;
     *t=*t+1;
     cout<<*t<<endl;
     cout<<"Before t:"<<t<<endl;
     t=t+1;
     cout<<"After t:"<<t<<endl;
     
     return 0;
 }*/
