#include<iostream>
using namespace std;
int LinearSearch(int Arr[], int target, int size){
	for(int i=0; i<size; i++){
		if(Arr[i]==target){
			return i+1;
		}else{
			return -1;
		}
	}
}

int main(){
	int arr[]={2,3,4,10,22,93,129,245,29,35,59,63,60};
	int sz=15;
	int tgt=300;
	cout<<"Index of "<<tgt<<" is : "<<LinearSearch(arr,tgt,sz);
	
}
