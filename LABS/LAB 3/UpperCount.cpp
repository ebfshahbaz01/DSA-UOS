#include<iostream>
#include<string>
using namespace std;
int UpperCount(string str){
	int count=0;
	for(int i=0; i<=str.length(); i++){
		char ch=str[i];
		if(ch>='A' && ch<='Z'){
			count++;
		}
	}
	cout<<"Numbers of UpperWords in "<<str<<" are total: "<<count<<endl;
}


int main(){
	UpperCount("ShA");
}

