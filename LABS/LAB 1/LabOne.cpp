#include <iostream>
using namespace std;
int main(){
//	
//	Fisrst program
    cout<<"Hello wordld "<<endl;
    return 0;


//Factorial of n

int n=20;
int factorial=1;

int i=1;
while(i<=n){
	factorial=factorial*i;
	i++;
}
cout<<"The Factorial of "<<n<<" is "<<factorial<<endl;
return 0;
}
