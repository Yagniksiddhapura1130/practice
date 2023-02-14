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
			int ordr,ordrs;
		
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
			
            cout<<endl<<"please enter your choice : ";
            cin>>ordrs;


			}

        void ordrdetails()
        {
            int ordr,ordrs;
           
        switch(ordr)
        { case 1:
            cout<<endl<<"1)double cheese margarita = 250"<<endl;
            cout<<"2)cheese corn=200"<<endl;
            cout<<"3)veg pizza=280"<<endl;

            cout<<endl<<"please enter which pizza would you like to have : ";
            cin>>ordrs;
            break;

            case 2:
            cout<<endl<<"1)Aloo Grilled Sandwich=70"<<endl;
            cout<<"2)Mixed Vegetable Sandwich=100"<<endl;
            cout<<"3)Corn Cheese Sandwich=60"<<endl;
            cout<<"4)veg sandwitch=80"<<endl;

            break;
            
            case 3:
            cout<<endl<<"1)Stuffed Moong Dal and Potato Rolls = 70"<<endl;
            cout<<"2)Aloo Corn Tikki Roll=80"<<endl;
            cout<<"3)Mexican Bread Roll =100"<<endl;
            cout<<"4)Potato Cream Cheese Roll=50"<<endl;
            cout<<"5)chineese roll"<<endl;

            break;

            case 4:
            cout<<endl<<"1)hydrabadi biryani=200"<<endl;
            cout<<"2)kashmiri biryani=120"<<endl;
            cout<<"3)veg biryani=150"<<endl;
            cout<<"4)handi biryani=100"<<endl;       

            break;
        }
        
        }
        void ordrprize()

    { 
        int ordrs;
        int  quan,orderprice=0,totalprice;
          switch (ordrs)
    
        {            
         

            case 1:
            { 
            
        
            cout<<"enter quantity : ";
            cin>>quan;

            
			orderprice=250; 
            totalprice = orderprice*quan; 
            cout<<endl<<"Your Order Price is Rs="<<orderprice<<endl<<"Your Total Price is Rs= "<<totalprice; 
            
            break; 
        
            case 2:
            cout<<"enter quantity : ";
            cin>>quan;

            
			orderprice=200; 
            totalprice = orderprice*quan; 
            cout<<endl<<"Your Order Price is Rs="<<orderprice<<endl<<"Your Total Price is Rs= "<<totalprice; 
            
            break; 

            cout<<"enter quantity : ";
            cin>>quan;

            
			orderprice=280; 
            totalprice = orderprice*quan; 
            cout<<endl<<"Your Order Price is Rs="<<orderprice<<endl<<"Your Total Price is Rs= "<<totalprice; 
            
            break;   
        }
        
        }
    }
};

int main()
{
	info i;
//	i.getinfo();//
	i.displayinfo();
    i.ordrdetails();
    i.ordrprize();
	return 0;
}