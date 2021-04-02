#include<iostream>
#include<string>
using namespace std;
class temel{
	public:
		string ad,soyad;
		int yas;
	void sorgu(){
		cout<<"adinizi giriniz:";
		cin>>ad;
		cout<<"soyadinizi giriniz:";
		cin>>soyad;
		cout<<"yasinizi girin:";
		cin>>yas;
	}
	void display(){
		cout<<"girdiniz adi ve soadi:"<<ad<<" "<<soyad<<endl;
		cout<<" girin yas:"<<yas<<endl;
	}
};
class turetilmis:public temel{
	
};
int main(){
	turetilmis t;
	t.sorgu();
	t.display();
/*
int secretNum=9;
int guess;
int trying=0;
do{
	cout<<"Enter guess :";
	cin>>guess;
	trying++;
}while(secretNum !=guess);
cout<<"you win !"<<endl;
cout<<"you try :"<<trying;
*/
return 0;
}
