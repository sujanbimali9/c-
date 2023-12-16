#include <iostream>
#include <math.h>
using namespace std;

class Circle
{
private:
    float r;

public:
    void input()
    {
        cout << "enter the radius" << endl;
        cin >> r;
    }
    void area()
    {

        cout << 3.14 * pow(r, 2) << endl;
    }
    void perimeter()
    {

        cout << 2 * 3.14 * r << endl;
    }
};
int main()
{
    Circle c;
    c.input();
    c.perimeter();
    c.area();

    return 0;
}