#include <iostream>
using namespace std;

class calculation
{

public:
    calculation()
    {
    }

    void addition(int m, int n)
    {
        int answer = m + n;
        cout << "addition is = " << answer << endl;
    }
    void substractio(int a, int b)
    {
        int answer = a - b;
        cout << "substraction is = " << answer << endl;
    }
    void multiplication(int c, int d)
    {
        int answer = c * d;
        cout << "multiplication is = " << answer << endl;
    }
    void division(int e, int f)
    {
        float answer = e / f;
        cout << "division is = " << answer << endl;
    }
};

int main()
{
    calculation d1;
    d1.addition(10, 20);
    d1.substractio(10, 20);
    d1.multiplication(10, 20);
    d1.division(20, 5);
    return 0;
}