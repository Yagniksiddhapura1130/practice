#include<iostream>
#include<string>
using namespace std;

class employee 
{
	public:
	
	int id;
	int age;
	int salary;
	string name;
	
	void getdata()
	{
	cout<<"enter your id :";
	cin>>id;
			
	cout<<"enter your name :";
	cin>>name;
			
	cout<<"enter your age :";
	cin>>age;
	
	cout<<"enter your salary :";
	cin>>salary;		
	}
	
	void display()
	{
	cout<<"id = "<<id<<endl<<"name = "<<name<<endl<<"age = "<<age<<endl<<"salary= "<<salary<<endl;	
	}
};

int main()
{
	employee e1,e2;
	
	e1.getdata();
	e1.display();
	
	e2.getdata();
	e2.display();
	
	return 0;
}