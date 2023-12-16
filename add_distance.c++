#include <iostream>
#include <math.h>
using namespace std;

class Circle
{
private:
    float f, i;

public:
    void input()
    {
        cout << "enter the feet and inch" << endl;
        cin >> f >> i;
    }

    void add(Circle c1, Circle c2)
    {
        Circle c;
        c.i = c1.i + c2.i;
        c.f = c1.f + c2.f + c.i / 12;
        c.i = int(c.i) % 12;
        cout << c.f << " Feet" << c.i << "inch" << endl;
    }
};
int main()
{
    Circle c1, c2;
    c1.input();
    c2.input();
    c1.add(c1, c2);

    return 0;
}