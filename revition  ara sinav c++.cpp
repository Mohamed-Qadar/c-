#include <iostream>
using namespace std;
class classone{
	public:
		int x;
		void set(int );
		int get();
};
void classone ::set(int y){
	x=y;
}
int classone::get(){
	return x;
}
 /*
template<typename t, typename u>
t add(t x,u y){
	return x+y;
}

const float PI = 3.14159;
// Bir küre sinifi...
class Kure
{
   public:
     float r;
     float x, y, z;
// Kürenin hacmini hesaplayan fonksiyon ... inline, yani class içinde tanimi yap//ilmis.
float hacim(){
     return (r*r*r*4*PI / 3);
}
// Kürenin alani..(inline fonksiyon)
float alan(){
     return (r * r * 4 * PI);}
 
};      // k bir nesne
 */
int main(){
	/*
int a,b;
string islem;
bool evet =true;
cout<<"hespmakinesi programin hosgeldin."<<endl;
cout<<"1.islem: toplama islemidir. "<<endl;
cout<<"2.islem: cikarma islemidir. "<<endl;
cout<<"3.islem: carpma islemidir. "<<endl;
cout<<"4.islem: bolme islemidir. "<<endl;
cout<<"5.islem: kuwevet islemidir. "<<endl;
cout<<"islemi giriniz : ";
cin>>islem;
if(islem=="1"){
	cout<<"birinci deger giriniz: ";
	cin>>a;
	cout<<"ikinci deger giriniz: ";
	cin>>b;
	cout<<"girdiniz degerler toplami ="<<a+b<<endl;
}
else if(islem=="2"){
		cout<<"birinci deger giriniz: ";
	cin>>a;
	cout<<"ikinci deger giriniz: ";
	cin>>b;
	cout<<"girdiniz degerler cikartma sonucu ="<<a-b<<endl;
	
}
else if(islem=="3"){
		cout<<"birinci deger giriniz: "<<endl;
	cin>>a;
	cout<<"ikinci deger giriniz: "<<endl;
	cin>>b;
	cout<<"girdiniz degerler carpmalari ="<<a*b<<endl;

}
else if(islem=="4"){
		cout<<"birinci deger giriniz: ";
	cin>>a;
	cout<<"ikinci deger giriniz: ";
	cin>>b;
	cout<<"girdiniz degerler bolme sonucu ="<<a/b<<endl;
}
cout<<"devam etmek ister misiniz:";
if(evet){
	
cout<<"ok ";
}

int arr[]={5,6,9,8,6,7};
int a;
for(a=0;a<6;a++){
	cout<<" "<<arr[a];
}

int matrix[3][3]={{1,2,4},{5,6,7},{8,9,0}};
int i,j;
    //for(i=0;i<3;i++){
	//for(j=0;j<3;j++){
	//	cout<<" "<<matrix[i][j];
	//}
	//cout<<endl;
//}
cout<<" "<<matrix[0][1]<<" "<<matrix[1][2];

int ar[]={5,1,3,};
int *ptr=ar;
while(*ptr !=0){
	cout<<*ptr<<endl;
*ptr++;

}
// waa funcka kure objectigiisa
    Kure k;

      k.r=1.0;
      k.x=2.0;
      k.y=3.0;
      k.z=4.0;
      cout << "X = " << k.x<<endl;
     cout << " Y = " << k.y<<endl;
      cout<< " Z = " << k.z<<endl;
     cout << " R = " << k.r << "n"<<endl;
     cout << "Alan =" << k.alan() << "n"<<endl;
     cout << "Hacim=" << k.hacim() << "n"<<endl;

//template ayaan tijaabin hayaa.
 cout<<add<double,int>(4.2,5); 
*/
classone obj;
obj.set(8);
cout<<obj.get();
	return 0;
}
