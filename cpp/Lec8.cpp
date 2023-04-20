/*#include<iostream>
using namespace std;
int main(){
	int a,b;    //simple calculator
	char op;
	cout<<"Enter the value of a"<<endl;
	cin>>a;
	cout<<"Enter the value of b"<<endl;
	cin>>b;
	cout<<"Enter the operation"<<endl;
	cin>>op;
	switch(op){
		case '+':cout<<(a+b)<<endl;
		break;
		case'-':cout<<(a-b)<<endl;
		break;
		case'*':cout<<(a*b)<<endl;
		break;
		case'%':cout<<(a%b)<<endl;
		break;
		case'/':cout<<(a/b)<<endl;
		break;
		default:cout<<"Error"<<endl;
		break;
	}
	return 0;
}*/
/*
#include<iostream>
using namespace std;
int main(){ 
    int n=1330;
    int note;
	cout<<"Enter the note (100,50,20,1):"<<endl;
	cin>>note;
	switch(note){
		case 100:cout<<"100 rupees note will be:"<<n/100<<endl;
		break;
		case 50:cout<<"50 rupees note will be:"<<(n%100)/50<<endl;
		break;
		case 20:cout<<"20 rupees note will be:"<<(n%50)/20<<endl;
		break;
		case 1:cout<<"1 rupees note will be:"<<(n%20)/1<<endl;
		break;
		default:cout<<"Nothing"<<endl;
		break;
	}
	return 0;
}
*//*
#include<iostream>
using namespace std;
int main(){         //finding power of num
	int a,b;
	cin>>a>>b;
	int ans=1;
	int i=1;
	for(i=1;i<=b;i++){
		ans=ans*a;
	}
	cout<<"Power of a is:"<<ans<<endl;
	return 0;
}*/
/*
#include<iostream>
using namespace std;
int power(int a, int b){     //power of num using func
	int ans=1;
	for(int i=1;i<=b;i++){
		ans=ans*a;
	}
	return ans;
}
int main(){
	int a,b;
	cin>>a>>b;
	int ans=power(a,b);
	cout<<"Answer is:"<<ans<<endl;
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int factorial(int n){     //printing nCr
	int fact=1;
	int i=1;
	for(int i=1;i<=n;i++){
		fact=fact*i;
	}
		return fact;
}
int nCr(int n,int r){
	int num=factorial(n);
	int deno=factorial(r)*factorial(n-r);
	int ans=num/deno;
	return ans;
}
int main(){
	int n,r;
	cin>>n>>r;
	cout<<"Answer is:"<<nCr(n,r)<<endl;
	return 0;
}
*/
/*#include<iostream>
using namespace std;
void printCounting(int n){  //counting no
    int i=0;
	for(int i=0;i<=n;i++){
		cout<<i<<" ";
	}
	cout<<endl;	
	}
	int main(){
		int n;
		cin>>n;
		printCounting(n);
		return 0;
	}
	*/
/*
#include<iostream>
using namespace std;
bool isPrime(int n){
	int i=2;
	for(int i=2;i<n;i++){   // no is prime or not
		if(n%i==0){
			return 0;
		}
			else{
				return 1;
			}
		}
}
int main(){
	int n;
    cin>>n;
    if(isPrime(n)){
    cout<<"Is a prime no:"<<endl;
}
else{
    cout<<"Is not a prime no"<<endl;
}
return 0;
}
*/
/*
#include<iostream>
using namespace std;
int AP(int n){    //finding nth term of AP=(3*n+7)
	return 3*n+7;
}
int main(){
	int n;
	cout<<"Enter the value of n"<<endl;
	cin>>n;
	cout<<"nth term is:"<<AP(n)<<endl;
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int fibo(int n){     \\finding nth fibonnaci no.
	int a=0;
	int b=1;
	cout<<a<<" "<<b<<" ";
	int nextNumber;
	int i;
	for(int i=0;i<n;i++){
		nextNumber=a+b;
		cout<<nextNumber<<" ";
		a=b;
		b=nextNumber;
	}
	return nextNumber;
}
int main()
{
	int n;
	cout<<"Enter n:"<<endl;
	cin>>n;
	cout<<"\n nth term is:"<<fibo(n);
}
*/
#include<iostream>
using namespace std;
int count(int n)       \\finding total no of 1 set bits in a and b
{
	int bit=0;
	while(n!=0){
		if(n&1){
			bit++;
		}
		n=n>>1;
	}
	return bit;
}
int bits(int a,int b){
	int total=count(a)+count(b);
	return total;
}
int main()
{
	int a,b;
	cout<<"Enter a:"<<endl;
	cin>>a;
	cout<<"Enter b:"<<endl;
	cin>>b;
	int ans=bits(a,b);
	cout<<"total no of 1 bit is:"<<ans;
	return 0;
}
