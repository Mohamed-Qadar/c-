#include<iostream>

using namespace std;
inline int add(int a ){
	return a+a+a;
}
int main(){
	int c;
	int i;
	for(i=1;i<=3;i++){
	cout<<"please enter a number:";
	cin>>c;
	}

	cout<<"the additional numbers of c is "<<add(c)<<endl;
	
	
	
	return 0;
}
