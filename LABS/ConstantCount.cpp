#include<iostream>
#include<string>
using namespace std;
int ConstCount(string str){
 int count=0;
 for(int i=0; i<str.length(); i++){
    char ch=tolower(str[i]);
    if(ch=='b' || ch=='c'||ch=='d'||ch=='f'||ch=='g' || ch=='h' || ch=='j'||ch=='k'||ch=='l'||ch=='m' || ch=='n' || ch=='p'||ch=='q'||ch=='r'||ch=='s' || ch=='t' || ch=='x'||ch=='z'){
        count ++;
    }
 }cout<<"The Constants in ' "<<str<<" '"<<"are total :" <<count<<endl;
}
int main(){
    ConstCount("SHABBY");
    return 0;
}