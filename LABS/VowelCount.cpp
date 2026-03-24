#include<iostream>
#include<string>
using namespace std;
int vowelCount(string str){
	int count=0;
	for(int i=1; i<=str.length(); i++){
		char ch=tolower(str[i]);
		if(ch=='a' || ch=='e'||ch=='i'||ch=='o'||ch=='u'){
			count++;
		}
	}
	cout<<"numbers of vowels in '"<<str<<"' are total: "<<count<<endl;
}


int main(){
	vowelCount("SHABBY");
}