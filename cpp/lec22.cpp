/*#include<iostream>
using namespace std;
int main(){
	char name[20];
	
	cout<<"Enter the name:"<<endl;
	cin>>name;
	name[3]='\0';
	
	cout<<"Your name is:"<<name<<endl;
	
	return 0;
} 
*/
//finding length of character and reversing and also checking palindrome or not
/*
#include<iostream>
using namespace std;
bool checkPalindrome(char a[],int n){
	int s=0;
	int e=n-1;
	while(s<=e){
		if(a[s]!=a[e]){
			return 0;
		}
		else{
			s++;
			e--;
		}
		return 1;
	}
}
void reverse(char name[], int n){
	int s=0;
    int e=n-1;
    while(s<e){
    swap(name[s++],name[e--]);
}
}
int getLength(char name[]){
	int count=0;
	for(int i=0;name[i]!='\0';i++){
		count++;
	}
	return count;
} 
int main(){
	char name[20];
	cout<<"Enter your name:"<<endl;
	cin>>name;
	
	cout<<"Your name is:"<<name<<endl;
	
	cout<<"Length is:"<<getLength(name)<<endl;
	reverse(name,getLength(name));
	cout<<"Your name:"<<name<<endl;
	cout<<"Palindrome or not:"<<checkPalindrome(name,getLength(name))<<endl;
	return 0;
}*/
/*
//checking palindrome or not(case insensitive)
#include<iostream>
using namespace std;

char toLowerCase(char ch){
	if(ch>='a'&&ch<='z'){
		return ch;
	}
	else{
		char temp=ch-'A'+'a';
		return temp;
	}
}

bool checkPalindrome(char a[],int n){
	int s=0;
	int e=n-1;
	while(s<e){
		if(toLowerCase(a[s])!=toLowerCase(a[e])){
			return 0;
		}
		else{
			s++;
			e--;
		}
	}
		return 1;
}
int getLength(char a[]){
	int count=0;
	for(int i=0;a[i]!='\0';i++){
		count++;
	}
	return count;
} 
int main(){
	int n;
	char a[20];
	cout<<"Enter your name:"<<endl;
	cin>>a;
	
	cout<<"Your name is:"<<a<<endl;
	
	cout<<"Palindrome or not:"<<checkPalindrome(a,getLength(a))<<endl;
	return 0;
}
*/
/*
//Maximum occuring character in string 
#include<iostream> 
using namespace std;

char getMaxOccCharacter(string s) {

    int arr[26] = {0};


    //create an array of count of characters
    for(int i=0; i<s.length(); i++) {
        char ch = s[i];
        //lowercase
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    //find maximum occ character
    int max =0, ans = 0;
    for(int i=0;i<26; i++) {
        if(max < arr[i]) {
            ans = i;
            max = arr[i];
        }
    }
    

    return 'a'+ans;

}

int main( ) {

   string s;
   cin >> s;

    cout << getMaxOccCharacter(s) << endl;

    return 0;
}
*/
/*
//inbuilt function in string
int len=strlen(name of ch arr);          //for finding length
strcmp(s1,s2);   ->it will give !=0 when not equal else 0 when equal   //comparision b/w two string(s1 &s2)
str(dest,src);     //copying string source to destination
*/

//permutation in string (Leetcode que no 567)=>runtime error 
class Solution {
private:
bool checkEqual(int a[26],int b[26]){
    for(int i=0; i<26;i++){
        if(a[i]!=b[i])
        return 0;
    }
    return 1;
}
public:
    bool checkInclusion(string s1, string s2) {
        //character count array
        int count1[26]={0};
        for(int i=0;i<s1.length();i++){
            int index=s1[i]-'a';
            count1[index]++;
        }
        //traverse s2 string in window of size s1 length and compare
        int i=0;
        int windowSize=s1.length();
        int count2[26]={0};
        //running for window
        while(i<windowSize && s2.length()){
           int index=s2[i]-'a';
           count2[index]++;
           i++;
        }
        if(checkEqual(count1,count2))                  //{
            return 1;
        //}
        //else aage window ko process kare
        while(i<s2.length()){
           char newChar=s2[i];
           int index=newChar-'a';
           count2[index]++;

           char oldChar=s2[i=windowSize];
           index=oldChar-'a';
           count2[index]--;
           i++;
             if(checkEqual(count1,count2))    //{
            return 1;
        }
        return 0;
    }
};
