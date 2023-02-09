#include<iostream>
using namespace std;

class info
{
	public:
		int id,age;
		string name;
		string gender;
	
		void getinfo()
		{	
			cout<<"enter your id :";
			cin>>id;
			
			cout<<"enter your name : ";
			cin>>name;	
			
			cout<<"enter your gender : ";
			cin>>gender;
			
			cout<<"enter your age : ";
			cin>>age;
			
		}
			
			void displayinfo()
				
		{
			cout<<endl<<endl<<"your id is = "<<id<<endl;
			cout<<"your name is = "<<name<<endl;
			cout<<"your gender is = "<<gender<<endl;
			cout<<"your age is= "<<age<<endl;
				
		}
};

class principle:public info
{
	public:
		int salary;
		void getsalary()
		{
			cout<<"enter your salary : ";
			cin>>salary;
						
		}
		
		void displaysalary()
		{
			cout<<endl<<endl<<"salary of principle is :  "<<salary<<endl;
			
		}
};
class teacher:public info
{
	public:
		int salary;
		void getsalary1()
		{
			cout<<"enter your salary : ";
			cin>>salary;
						
		}
		
		void display1()
		{
			cout<<endl<<endl<<"salary of teacher is :  "<<salary<<endl;
			
		}
};

int main()
{
	principle p1;
	teacher t1;
	p1.getinfo();
	p1.getsalary();
	t1.getinfo();
	t1.getsalary1();
	p1.displayinfo();
	t1.displayinfo();
	p1.displaysalary();
	t1.display1();
	
	
	return 0;
}
