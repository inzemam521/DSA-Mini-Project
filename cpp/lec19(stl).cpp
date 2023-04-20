//Array
/*
#include<iostream>
#include<array>
using namespace std;
int main(){
   int basic[3]={1,2,3};           //normal array
   
   array<int,4> a={1,2,3,4};       //stl array
   int size=a.size();             //stl array size
   for(int i=0;i<size;i++){
   	cout<<a[i]<<endl;
   }
   cout<<"Element at 2nd Index:"<<a.at(2)<<endl;
   cout<<"Array Empty or not:"<<a.empty()<<endl;
   cout<<"First element:"<<a.front()<<endl;
   coout<<"Last element:"<<a.back()<<endl;
   
	return 0;
}
*/
/*
//vector(It is dynamic array ,it can adjust its size on the basis of requirement)
#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v;      //Iska size zero hoga
	
	vector<int> a(5,1);       //here 5=> size of vector, 1=>All element is Initialised by 1
	cout<<"print a:"<<endl;
	for(int i:a){
		cout<<i<<" ";        //output:print a: 1 1 1 1 1 
	}
	//copying above a in vector
	vector<int> last(a);
	cout<<"print last:"<<endl;
	for(int i:last){
		cout<<i<<" ";      output:print last:1 1 1 1 1
	}
	cout<<endl;
	//size means cureent total element present,, capacity means maximum kitna element allocate ho skta hai
	cout<<"Capacity:"<<v.capacity()<<endl;       //capacity=zero
	
	v.push_back(1);
	cout<<"Capacity:"<<v.capacity()<<endl;       //capacity=one
	
	v.push_back(2);
	cout<<"Capacity:"<<v.capacity()<<endl;       //capacity=2
	
	v.push_back(3);
	cout<<"Capacity:"<<v.capacity()<<endl;       //capacity=4 kyuki iska capacity 2 tha pahle fir jab element ko capacity se jyad kiye h(element=3) to iska capacity twice ho gya h previous capacity ke  
	cout<<"Size:"<<v.size()<<endl;               //size=3
	
	cout<<"Element at 2nd index:"<<v.at(2)<<endl;    //output:3
	 
	cout<<"First element:"<<v.front()<<endl;         //output:1
   cout<<"Last element:"<<v.back()<<endl;           //output:3
   
   cout<<"Before pop:"<<endl;
   for(int i:v){
   	cout<<i<<" ";
   }
   cout<<endl;
   
   v.pop_back();              //pop means remove last element
   	
   cout<<"After pop:"<<endl;
   for(int i:v){
   	cout<<i<<" ";             //output:before pop=>1 2 3 , after pop=>1 2 
   }
   
   cout<<"Before clear size:"<<v.size()<<endl;
   
   v.clear();              //size will be zero, no element present
   cout<<"After clear size:"<<v.size()<<e
   ndl;     //output: Before clear size=>2(1 2) && After clear size=>0    
}
*/

//Doubly ended queue{Insertion and deletion can be done from both side(front and back)}
/*
#include<iostream>
#include<deque>
using namespace std;
int main(){
	deque<int> d;
	
	d.push_back(1);
	d.push_front(2);
	for(int i:d){
		cout<<i<<" ";        //out:2 1 
	}
	d.pop_back();
	cout<<endl;
	for(int i:d){
		cout<<i<<" ";      //out:2
	}
	d.pop_front();
	cout<<endl;
	for(int i:d){
		cout<<i<<" ";      //out:1
	}
	cout<<"Print first index element:"<<d.at(1)<<endl;            //out:1\	
	cout<<"front:"<<d.front()<<endl;             //out:2
	cout<<"back:"<<d.back()<<endl;             //out:1
	cout<<"empty or not:"<<d.empty()<<endl;             //out:0(false)
	
	cout<<"before erase:"<<d.size()<<endl;
	d.erase(d.begin(),d.begin()+1);
	cout<<"after erase:"<<d.size()<<endl;     //out:before erase=>2,, after erase=>1
	for(int i:d){
}		cout<<i<<endl;     out:1
	}
*/	
//List (doubly linked list ka use krke list stl banaya gaya hai) 
/*
#include<iostream>
#include<list>
using namespace std;
int main(){
	list<int> l;
	
	list<int> n(5,100);
	cout<<"printing n:"<<endl;
	for(int i:l){
		cout<<i<<" ";     //out:printing: 100 100 100 100 100
		
	}
	l.push_back(1);
	l.push_front(2);
	
	for(int i:l){
		cout<<i<<" ";          //out:2 1
	}
	cout<<endl;
	l.erase(l.begin());
	cout<<"after erase:"<<endl;
	for(int i:l){
		cout<<i<<" ";     //out: after erase 1 
	}
	cout<<"size of list:"<<l.size()<<endl;    //out:size of list:1
}
*/

//stack
/*
#include<iosream>
#include<stack>
using namespace std;
int main(){
	stack<string> s;
	
	s.push("Inzemam");
	s.push("Shabab");
	s.push("Seraz");
	
	cout<<"Top of the element:"<<s.top()<<" ";    // out:Seraz
	
	s.pop();
	cout<<"Top of the element:"<<s.top()<<" ";    // out:Shabab
	cout<<"size of the element:"<<s.size()<<" ";    // out:	3
	cout<<"Empty or not:"<<s.empty()<<" ";          //out:0(false)
	}
*/	
//queue
/*
include<iostream>
#include<queue>
using namespace std;
int main(){
	queue<string> q;
	
	s.push("Inzemam");
	s.push("Shabab");
	s.push("Seraz");
	
	cout<<"Size before pop:"<<q.size()<<" ";     //out:3	
	cout<<"First element:"<<q.front()<<" ";    // out:Inzemam
	
	s.pop();
	cout<<"Size after pop:"<<q.size()<<" ";     //out:2
	cout<<"First element:"<<q.front()<<" ";    // out:Shabab
}
*/

//priority queue( Isme first element hamesha greatest hoga)
/*
#include<iostream>
#include<queue>
using namespace std;
int main(){
	//max heap
	priority_queue<int> maxi;
	
	//min heap
	priority_queue<int,vector<int>, greater<int>> mini;
	
	maxi.push(1);
	maxi.push(3);
	maxi.push(2);
	maxi.push(0);
	
	cout<<"Size:"<<maxi.size()<<endl;     //out:4
	int n=maxi.size();
	for(int i=0;i<n;i++){
		cout<<maxi.top<<" ";
		maxi.pop();  
	}
	cout<<endl;           //out:3 2 1 0
	
	mini.push(5);
	mini.push(1);
	mini.push(0);
	mini.push(4);
	mini.push(3);
	
	int m=mini.size();
	for(int i=0;i<m;i++){
		cout<<mini.top<<" ";
		mini.pop();  
	}
	cout<<endl;           //out:0 1 3 4 5
	cout<<"Empty or not:"<<mini.empty()<<endl;       //out:1(true)
}
*/
//set (unique element is stored, duplicacy nhi rhta hai,element sorted rhta h, modification nhi hota h)
/*
#include<iostream>
#include<set>
using namespace std;
int main(){
	set<int> s;
	
	s.insert(5);
	s.insert(5);
	s.insert(5);	
	s.insert(1);
	s.insert(6);
	s.insert(6);
	s.insert(0);
	s.insert(0);
	s.insert(0);
	
	for(auto i:s){
		cout<<i<<endl;     //out:0 1 5 6
	}
	cout<<endl;
	
	set<int>:: iterator it=s.begin();
	it++;
	s.erase(it);
	
	for(auto i:s){
		cout<<i<<endl;    // out:0 5 6
	}
	cout<<endl;
	
	cout<<" 5 is present or not:"<<s.cout(5)<<endl;    // count batata h element present hai ki nhi (output:1(true)
	
	set<int>::iterator itr=s.find(5);                //find return iterator of that particular element
	cout<<"Value present at it:"<<*it<<endl;        //out:1(true)   
	
	for(auto it=itr;it!=s.end();it++){
		cout<<it<<" ";
	}
	cout<<endl;              //out:5 6   {value after 5 is printed including 5 (find(5)}
}
*/

//Map{data key-value ke form me store hota h, ek key(unique) do value ko point nhi krega lkn 2 key same value ko point kr skta h)
/*
#include<iostream>
#include<map>
using namespace std;
int main(){
	map<int,string> m;
	
	m[1]="Inzemam";      //method for inserting
	m[2]="Shabab":
	m[13]="Seraz";
	
	m.insert({5,"Bheem"});  // another method for inserting
*/	
/*	for(auto i:m){
		cout<<i.first<<endl;       //out:1 2 5 13 (sorted order in case of map but radom in unorder map) 
	}*/
/*	cout<<"Before erase:"<<endl;
	for(auto i:m){
		cout<<i.first<<" "<<i.second<<endl;     //out: Before erase: 1 Inzemam  2 Shabab  5 Bheem  13 Seraz 
	}
	cout<<"Finding element 13:"<<m.count(13)<<endl;      //out:1(true)
	
	m.erase(13);
	cout<<"After erase:"<<endl;
	for(auto i:m){
		cout<<i.first<<" "<<i.second<<endl;     //output:After erase:1 Inzemam  2 Shabab  5 Bheem
	}
	
	auto it=m.find(5);     //find return iterator of that particular element		
	
	for(auto i=it;i!=m.end();i++){
	cout<(*i).first<<endl;            //out:5 13
	}	
}
*/

//algorithm
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	
	vector<int> v;
	
	v.push_back(1);
	v.push_back(3);
	v.push_back(6);
	v.push_back(7);
	
	cout<<"Finding 6:"<<binary_search(v.begin(),v.end(),6)<<endl;     //out:1(true)
	
	cout<<"lower bound:"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;      //out:2
	cout<<"uppper bound:"<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;     //out:2
	
	int a=3;
	int b=5;
	cout<<"Max:"<<max(a,b)<<endl;       //out:5
	cout<<"Min:"<<min(a,b)<<endl;       //out:3
	
	swap(a,b);
	cout<<"a after swaping:"<<a<<endl;
	
	string s="abcd";
	reverse(s.begin(),s.end());
	cout<<"Reversing Strind s(abcd):"<<s<<endl;
	
	rotate(v.begin(),v.begin()+1,v.end());
	cout<<"after rotate"<<endl; 
	for(int i:v){
		cout<<i<<" ";                 //out:3 6 7 1
	}
	
	sort(v.begin(),v.end());
	cout<<"sorting:"<<endl;
	for(int i:v){
	out<<i<<" ";                 //out:1 3 6 7
	}
	
}
