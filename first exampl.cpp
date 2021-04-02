#include<iostream>

using namespace std;
/*
int multipy(int a,int b){
	return a*b;
}

void toplama(int a,int b){
	int c;
	c=a*b;
	cout<<"the result is:"<<c<<endl;
}
*/
struct insan{
	string yas;
	string adi;
	string sehir;
	int TcNo;
	string nicname;
};
int main(){
	insan ozellikleri;
	ozellikleri.sehir ="trabzon";
	ozellikleri.TcNo =1234567;
	ozellikleri.adi ="Mohamed";
	ozellikleri.yas ="23";
	cout<<ozellikleri.adi<<" waa wiilil fcn "<<"waxa uuna jiraa "<<ozellikleri.yas<<endl;
	cout<<ozellikleri.TcNo<<" wakaas"<<"waxa uuna ku noolyahay "<<ozellikleri.sehir<<endl;
	ozellikleri.nicname;
	cout<<"please enter your nicname";
	cin>> ozellikleri.nicname;
	cout<<"your nicknamme is "<<ozellikleri.nicname<<endl;
	
	
	/*	
	int sonuc=multipy(3,3);
	cout <<sonuc;

	int x,y,result;
	cout<<"olease enetre two numbers:";
	cin>>x>>y;
	toplama(x,y);
*/
	
	/*
	int a,b;
	string islem;
	
	cout<<"hos geldiniz hesap makinesi:"<<endl;
	cout<<"1.islem :toplam"<<endl;
	cout<<"2.islem :cikarma"<<endl;
	cout<<"3.islem :carma"<<endl;
	cout<<"4.islem :bolme"<<endl;
	
	
	cout<<"islem girin:";
	cin>>islem;
	if(islem=="1"){
		cout<<"a:";
		cin>>a;
		cout<<"b:";
		cin>>b;
		cout<<"toplam ="<<a+b<<endl;
	}
	else if(islem=="2"){
		cout<<"a:";
		cin>>a;
		cout<<"b:";
		cin>>b;
			cout<<"toplam ="<<a-b<<endl;
	}
	
	else if(islem=="3"){
		cout<<"a:";
		cin>>a;
		cout<<"b:";
		cin>>b;
			cout<<"toplam ="<<a*b<<endl;
	}
	
	else if(islem=="4"){
		cout<<"a:";
		cin>>a;
		cout<<"b:";
		cin>>b;
			cout<<"toplam ="<<a/b<<endl;
	}
	
	*/
	
	
	
	return 0;
}
