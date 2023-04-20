/*#include<iostream>
using namespace std;
int main(){
	int i=5;
	int *p=&i;
	int **p2=&p;
	
	cout<<"Everything is ok"<<endl;
	cout<<"Printing p:"<<p<<endl;
	cout<<"Address of p:"<<&p<<endl;
	cout<<"1st:"<<*p2<<endl;                     //cout<<*p2 & cout<<p will print the same value
	
	cout<<"Case1:"<<i<<endl;
	cout<<"Case2:"<<*p<<endl;
	cout<<"Case3:"<<**p2<<endl;                  // case1=case2=case3
	
	cout<<"case4:"<<&i<<endl;
	cout<<"case5:"<<p<<endl;
	cout<<"case6:"<<*p2<<endl;                   //case4=case5=case6
	
	cout<<"case7:"<<&p<<endl;
	cout<<"case8:"<<p2<<endl;                    //case7=case8
	
	return 0;
}
*/
#include<iostream>
using namespace std;

void update(int **p2){
    // p2=p2+1;
	//kuch change hoga?? No          {change update function ke ander huyi hai, main function ke andar nahi (pass by value)}  
	
 	//*p2=*p2+1;
	//kuch change hoga?? Yes         {change main function me p ke andar huyi h kyuki update function me p tha hi nhi}
		
	**p2=**p2+1; 
	//kuch change hoga?? Yes         {same as above(*p2=*p2+1)}
}
int main(){
	int i=5;
	int *p=&i;
	int **p2=&p;
	
	cout<<"before:"<<i<<endl;
	cout<<"before:"<<p<<endl;
	cout<<"before:"<<p2<<endl;
	update(p2);
	cout<<"after:"<<i<<endl;
	cout<<"after:"<<p<<endl;
	cout<<"after:"<<p2<<endl;
	return 0;
}
