#include <iostream>
using namespace std;
class A{
	private:
		int a;
	public:
		int getx();
		void setx(int);
		friend void tes(A&);
};
int A::getx(){
	return a;
}
void A::setx(int a){
	a=a;
}
void foo(A &b){
	b.a=0;
}
int main()
{
A n;
n.setx(9);
cout<<n.getx();
    return 0;
}

