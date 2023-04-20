/*#include<iostream>
using namespace std;
int main()
{
	int a=1;
	int b=2;
	
	if(a-- >0 || ++b>2){
		cout<<"Stage1-Inside If ";
	}else{
		cout<<"Stage2 - Inside else";
	}
	cout<<a<<" "<<b<<endl;
}
*/
/*#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the value of n"<<endl;
	cin>>n;
	int sum=0;
	int i=0;
	for(int i=0; i<=n; i++){
		sum=sum+i;
	}
	cout<<sum<<endl;
}*/
/*#include<iostream>
using namespace std;
int main(){  // fabonacci series
	int n=10;
	int a=0;
	int b=1;
	cout<<a<<" "<<b<<" ";
	for(int i=1;i<=n;i++){
		int nextnumber=a+b;
		cout<<nextnumber<<" ";
		a=b;
		b=nextnumber; 
	}
	return 0;
}
*/
/*#include<iostream>
using namespace std;
int main(){
using namespace std;
int main(){
	int i=0;
	for(i=0;i<=5;i--){
		cout<<i<<" ";
		i++;
	}
}*/
/*#include<iostream>
#include<math.h>
using namespace std;
int main(){    //decimal to binary
	int n;
	cin>>n;
	int ans=0;
	int i=0;
	while(n!=0){
	int bit=(n&1);
	ans=(bit*pow(10,i))+ans;
	n=n>>1;
	i++;
}
cout<<"Answer is "<<ans<<endl;
return 0;
}*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){    //binary to decimal
	int n;
	cin>>n;
	int ans=0;
	int i=0;
	while(n!=0){
		int digit=n%10;
		if(digit==1){
			ans=ans+pow(2,i);
		}
		n=n/10;
		i++;
	}
	cout<<ans<<endl;
}

