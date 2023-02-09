#include<iostream>
using namespace std;

class v
{
    public:

    void vehical()
    {
        cout<<"this is a vehical"<<endl;

    }

};
class c:public v
{
    public:
    void car()
    {
        cout<<"this is a car"<<endl;
    }
};
class r:public c
{
    public:
    void racing ()
    {
        cout<<"this is a racing car"<<endl;

    }
    
};
class bugati:public r
{
    public:
    void b()

    {
        cout<<"this is a bugati"<<endl;
    }
};

int main()
{
    bugati b1;
    b1.vehical();
    b1.car();
    b1.racing();
    b1.b();
    return 0;
}