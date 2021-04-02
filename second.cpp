#include<iostream>

using namespace std;
struct bilgi {
	string name;
	int score;
};
int main() {
	bilgi des;
	des.name = "mohamed";
	des.score = 100;
	bilgi *penter=&des;
	penter->name="qadar";
	penter->score=200;
	cout << des.name << "\t" << des.score << endl;

	getchar();
}
/*

struct bilgi{
	string name;
	string city;
	int Tc;
	string ago;
};
int main(){
	bilgi arr[4];
	int a;
	for(a=0;a<4;a++){
		bilgi person;
		cout<<a+1<<".peerson name:";
		cin>>person.name;
			cout<<"peerson city:";
		cin>>person.city;
			cout<<"peerson tc:";
		cin>>person.Tc;
			cout<<"peerson ago:";
		cin>>person.ago;
		arr[a]=person;
	}
		for(a=0;a<4;a++){
			cout<<"name is:"<<arr[a].name<<endl;
			cout<<"city is:"<<arr[a].city<<endl;
			cout<<"Tc No is:"<<arr[a].Tc<<endl;
			cout<<"his/her ago is:"<<arr[a].ago<<endl;
		}
		
	return 0;
}*/
