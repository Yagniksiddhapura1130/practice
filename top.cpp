#include<iostream>
using namespace std;

class info
{
	public:
	int id;
	string name; 
	string order_name;
		
//		void getinfo()
//		
//		{
//			cout<<"-------------tops tech fast food ------------"<<endl<<endl;
//			cout<<"enter your name : ";
//			cin>>name;
//				
//		}
		void displayinfo()
		{	
			
		
			cout<<"-------------tops tech food ------------"<<endl<<endl;
			
			cout<<"enter your name : ";
			cin>>name;
			cout<<"hello "<<name<<endl;
			
			cout<<endl<<"would you like to order ?"<<endl<<endl;
			cout<<"--------------menu-------------"<<endl<<endl;
			
			cout<<"1) pizzas"<<endl;
			cout<<"2) sandwich"<<endl;
			cout<<"3) rolls"<<endl;	
			cout<<"4) biryani"<<endl;
			
			}
};

int main()
{
	info i;
//	i.getinfo();//
	i.displayinfo();
	return 0;
}