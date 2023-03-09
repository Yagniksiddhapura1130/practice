#include<iostream>
using namespace std;

class info
{	
//	beginning;
	
	public:

	string name,gotostart; 
	string order;
		
		
		void displayinfo()
		{	
			
		
			int ordr,ordrs;
		
			cout<<"\t\t\t\t-------------Tops Tech Food ------------"<<endl<<endl;
			
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
            cin>>ordr;


			}
			
		void orderdetails()
		{
			int order,pchoice,quantity,gotostart,beginning;
			
			
			if(order==1)
			{
                int pchoice1,choice;
			
			cout<<endl<<"1)double cheese margarita = 250"<<endl;
            cout<<"2)cheese corn=200"<<endl;
            cout<<"3)veg pizza=280"<<endl;
            
           cout<<endl<<"Please Enter which pizza would you like to have?:";
		   cin>>pchoice1;
		

			switch (pchoice1)
			{
			 case 1:
			 	
			 cout<<endl<<"Please Enter Quantity: ";
			 cin>>quantity;
			
			 choice = 250*quantity;	
			 
			 cout<<endl<<"\t\t--------Your Order---------"<<endl<<endl;
			 cout<<quantity<<" double cheese margarita";
			 cout<<endl<<endl<<"Your Total Bill is "<<choice<<endl<<"Your Order Will be delivered in 40 Minutes";
			 cout<<endl<<"Thank you For Ordering From tops tech food "<<endl;
			 
			 cout<<endl<<"Would you like to order anything else? Y / N:";
			 cin>>gotostart;
			 
				if(gotostart=='Y' || gotostart=='y')
			{
			//goto beginning;
	
			}
			 break;
			
			case 2:
			 
			 cout<<endl<<"Please Enter Quantity: ";
			 cin>>quantity;	
			 
			 choice = 200*quantity;	
			 
			 cout<<"\t\t--------Your Order---------"<<endl;
			 cout<<quantity<<" cheese corn";
			 cout<<endl<<endl<<"Your Total Bill is "<<choice<<endl<<"Your Order Will be delivered in 40 Minutes";
			 cout<<endl<<"Thank you For Ordering From tops tech food "<<endl;
			 
			 cout<<endl<<"Would you like to order anything else? Y / N:";
			 cin>>gotostart;
			 break;
			 
			case 3:
			 
			 cout<<endl<<"Please Enter Quantity: ";
			 cin>>quantity;
			 	
			 choice = 280*quantity; 
			 
			 cout<<"\t\t--------Your Order---------"<<endl;
			 cout<<quantity<<" veg pizza";
			 cout<<endl<<endl<<"Your Total Bill is "<<choice<<endl<<"Your Order Will be delivered in 40 Minutes";
			 cout<<endl<<"Thank you For Ordering From tops tech food "<<endl;
			 
			 break;

			
		}
        }
    
		
			else if(order==2)
		{
            int schoice1,quantity,choice;

		    cout<<endl<<"1)Aloo Grilled Sandwich=70"<<endl;
            cout<<"2)Mixed Vegetable Sandwich=100"<<endl;
            cout<<"3)Corn Cheese Sandwich=60"<<endl;
         
			
			cout<<"\nPlease Enter which sandwich you would like to have?: ";
			cin>>schoice1;
			
		
			switch (schoice1)
			{
			 case 1:
			 	
			 cout<<endl<<"Please Enter Quantity: ";
			 cin>>quantity;
			
			 choice = 70*quantity;	
			 
			 cout<<"\t\t--------Your Order---------"<<endl;
			 cout<<quantity<<" Aloo Grilled Sandwich ";
			 cout<<endl<<endl<<"Your Total Bill is "<<choice<<endl<<"Your Order Will be delivered in 40 Minutes";
			 cout<<endl<<"Thank you For Ordering From tops tech food "<<endl;
			 
			 break;
			
			case 2:
			 
			 cout<<endl<<"Please Enter Quantity: ";
			 cin>>quantity;	
			 
			 choice = 100*quantity;	
			 
			 cout<<"\t\t--------Your Order---------"<<endl;
			 cout<<quantity<<" Mixed Vegetable Sandwich";
			 cout<<endl<<endl<<"Your Total Bill is "<<choice<<endl<<"Your Order Will be delivered in 40 Minutes";
			 cout<<endl<<"Thank you For Ordering From tops tech food "<<endl;
			 
			 break;
			 
			case 3:
			 
			 cout<<endl<<"Please Enter Quantity: ";
			 cin>>quantity;
			 	
			 choice =60*quantity; 
			 
			 cout<<"\t\t--------Your Order---------"<<endl;
			 cout<<quantity<<" Corn Cheese Sandwich";
			 cout<<endl<<endl<<"Your Total Bill is "<<choice<<endl<<"Your Order Will be delivered in 40 Minutes";
			 cout<<endl<<"Thank you For Ordering From tops tech food "<<endl;
			 
			 break;

            cout<<"Would you like to order anything else? Y / N:";
			cin>>gotostart;
			
		}
	}
			

			else if(order==3)
			{
			
			int rchoice1,quantity,choice;

			cout<<endl<<"1)Stuffed Moong Dal and Potato Rolls = 70"<<endl;
            cout<<"2)Aloo Corn Tikki Roll=80"<<endl;
            cout<<"3)Mexican Bread Roll =100"<<endl;
           
         
		 	cout<<"\nPlease Enter which Roll you would like to have?: ";
			cin>>rchoice1;
			
         	switch (rchoice1)
			
			{
			 case 1:
			 	
			 cout<<endl<<"Please Enter Quantity: ";
			 cin>>quantity;
			
			 choice = 70*quantity;	
			 
			 cout<<endl<<"\t\t--------Your Order---------"<<endl<<endl;
			 cout<<quantity<<" Stuffed Moong Dal and Potato Rolls";
			 cout<<endl<<endl<<"Your Total Bill is "<<choice<<endl<<"Your Order Will be delivered in 40 Minutes";
			 cout<<endl<<"Thank you For Ordering From tops tech food "<<endl;
			 
//			 cout<<endl<<"Would you like to order anything else? Y / N:";
//			 cin>>gotostart;
//			 
//				if(gotostart=='Y' || gotostart=='y')
//			{
//			//goto beginning;
	
			
			 break;
			
			case 2:
			 
			 cout<<endl<<"Please Enter Quantity: ";
			 cin>>quantity;	
			 
			 choice = 80*quantity;	
			 
			 cout<<"\t\t--------Your Order---------"<<endl;
			 cout<<quantity<<" Aloo Corn Tikki Roll";
			 cout<<endl<<endl<<"Your Total Bill is "<<choice<<endl<<"Your Order Will be delivered in 40 Minutes";
			 cout<<endl<<"Thank you For Ordering From tops tech food "<<endl;
			 
			 break;
			 
			case 3:
			 
			 cout<<endl<<"Please Enter Quantity: ";
			 cin>>quantity;
			 	
			 choice = 100*quantity; 
			 
			 cout<<"\t\t--------Your Order---------"<<endl;
			 cout<<quantity<<" Mexican Bread Roll";
			 cout<<endl<<endl<<"Your Total Bill is "<<choice<<endl<<"Your Order Will be delivered in 40 Minutes";
			 cout<<endl<<"Thank you For Ordering From tops tech food "<<endl;
			 
			 break;

			
		}
			}
			
			else if(order==4)
			{
			int bchoice1,quantity,choice;
			
			cout<<endl<<"1)hydrabadi biryani=200"<<endl;
            cout<<"2)kashmiri biryani=120"<<endl;
            cout<<"3)veg biryani=150"<<endl;
        
            cout<<"\nPlease Enter which biryani you would like to have?: ";
			cin>>bchoice1;
         	
			switch (bchoice1)
			
			{
			 case 1:
			 	
			 cout<<endl<<"Please Enter Quantity: ";
			 cin>>quantity;
			
			 choice = 200*quantity;	
			 
			 cout<<endl<<"\t\t--------Your Order---------"<<endl<<endl;
			 cout<<quantity<<" hydrabadi birya";
			 cout<<endl<<endl<<"Your Total Bill is "<<choice<<endl<<"Your Order Will be delivered in 40 Minutes";
			 cout<<endl<<"Thank you For Ordering From tops tech food "<<endl;
			 
//			 cout<<endl<<"Would you like to order anything else? Y / N:";
//			 cin>>gotostart;
//			 
//				if(gotostart=='Y' || gotostart=='y')
//			{
//			//goto beginning;
	
			break;
			
			case 2:
			 
			 cout<<endl<<"Please Enter Quantity: ";
			 cin>>quantity;	
			 
			 choice = 120*quantity;	
			 
			 cout<<"\t\t--------Your Order---------"<<endl;
			 cout<<quantity<<" kashmiri biryani";
			 cout<<endl<<endl<<"Your Total Bill is "<<choice<<endl<<"Your Order Will be delivered in 40 Minutes";
			 cout<<endl<<"Thank you For Ordering From tops tech food "<<endl;
			 
			 break;
			 
			case 3:
			 
			 cout<<endl<<"Please Enter Quantity: ";
			 cin>>quantity;
			 	
			 choice = 150*quantity; 
			 
			 cout<<"\t\t--------Your Order---------"<<endl;
			 cout<<quantity<<" veg biryani";
			 cout<<endl<<endl<<"Your Total Bill is "<<choice<<endl<<"Your Order Will be delivered in 40 Minutes";
			 cout<<endl<<"Thank you For Ordering From tops tech food "<<endl;
			
			 break;

		}
		}
            }
			};
		
		
		
		int main()
		{
		    info i;
			
			i.displayinfo();
			i.orderdetails();
			
			return 0;
            
        }