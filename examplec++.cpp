 #include <iostream>
 #include <string> 
using namespace std;
class classone{
	public:
		void set(string name){
			coursename=name;
		}
	string get(){
		return coursename;
	}
	void display(){
		cout<<"welcome to the course:"<<get();
	}
		private:
			string coursename;
};
int main(){
string nameofcourse;
classone mybook;
cout<<"please enter your course name:";
getline(cin, nameofcourse);
mybook.set(nameofcourse);
cout<<endl;
mybook.display();
	
	
}
