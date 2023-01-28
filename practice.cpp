#include<iostream>
#include<string>
using namespace std;

class student
{
	public:
		
		int id;
		string name;
		int age;
		
		void getdata()
		{
			cout<<"enter your id :";
			cin>>id;
			
			cout<<"enter your name :";
			cin>>name;
			
			cout<<"enter your age :";
			cin>>age;
			
		}
		
		void display()
		{
			cout<<"id = "<<id<<endl<<"name = "<<name<<endl<<"age = "<<age<<endl;
			
		}
		
};

int main()
{
	student s1,s2;
	
	s1.getdata();
	s2.getdata();
	s1.display();
	s2.display();
	
	return 0;
}