#include <iostream>
using namespace std;

class line
{
public:
    inline float mul(float x, float y)
    {
        return (x * y);
    }
    inline float cube(float x)
    {
        return (x * x * x);
    }
};

int main()
{
    line obj;
    float m, n;

    cout << endl
         << "Enter 1st value : ";
    cin >> m;
    cout << endl
         << "Enter 2nd value : ";
    cin >> n;
    cout << endl
         << "Multiplication value is :: " << m * n;
    cout << endl
         << "Cube value of  " << obj.cube(m) << " is :: " << obj.cube(n);

    return 0;
}