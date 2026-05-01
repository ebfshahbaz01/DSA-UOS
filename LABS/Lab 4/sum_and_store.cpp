#include<iostream>
using namespace std;
int Array(){
	int size=6;
	int arr[size];
	
	for(int i=1; i<size; i++){
		cout<<"Enter the "<<i<<"st Number: ";
		cin>>arr[i];
	}
	cout <<"Array=[";
	for(int j=1; j<size; j++){
		arr[j];
		cout<<arr[j]<<",";
	} cout <<"]";
	return -1;
}
int main(){
	Array();
}
