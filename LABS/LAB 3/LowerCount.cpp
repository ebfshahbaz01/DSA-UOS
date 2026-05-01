#include<iostream>
#include<string>
using namespace std;
int LowerCount(string str){
	int count=0;
	for(int i=0; i<=str.length(); i++){
		char ch=str[i];
		if(ch>='a' && ch<='z'){
			count++;
		}
	}
	cout<<"numbers of LowerCount in "<<str<<" are total: "<<count<<endl;
}


int main(){
	LowerCount("ShAhBaZ");
}

