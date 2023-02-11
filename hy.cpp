#include<iostream>
using namespace std;

class info
{
	public:
	int n ;
	string name; 
	string order;
		
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
			int ordr;
		
			cout<<"\t\t\t\t-------------tops tech food ------------"<<endl<<endl;
			
			cout<<"enter your name : ";
			cin>>name;
			cout<<"hello "<<name<<endl;
			
			cout<<endl<<"would you like to order ?"<<endl<<endl;
			cout<<"\t\t\t\t--------------menu-------------"<<endl<<endl;
			
			cout<<"1) pizzas"<<endl;
			cout<<"2) sandwich"<<endl;
			cout<<"3) rolls"<<endl;	
			cout<<"4) biryani"<<endl;
			
            cout<<"please enter your choice : ";
            cin>>ordr;


			}

        void ordrdetails()
        {
            int ordr;
           
        switch(ordr)
        { case 1:
            cout<<endl<<"double cheese margarita = 250"<<endl;
            cout<<"cheese corn=200"<<endl;
            cout<<"veg pizza=280"<<endl;

            break;

            case 2:
            cout<<endl<<"Aloo Grilled Sandwich=70"<<endl;
            cout<<"Mixed Vegetable Sandwich=100"<<endl;
            cout<<"Corn Cheese Sandwich=60"<<endl;
            cout<<"veg sandwitch=80"<<endl;

            break;
        }

        void ordrprize()

        { int  quantity,orderprice=0;

        

        }

        

        }
};

int main()
{
	info i;
//	i.getinfo();//
	i.displayinfo();
    i.ordrdetails();

	return 0;
}