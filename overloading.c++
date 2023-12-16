#include <iostream>
#include <math.h>
using namespace std;
float area(float l)
{
    return pow(l, 2);
}
float area(int r)
{
    return 3.14 * pow(r, 2);
}
float area(float l, float b)
{
    return l * b;
}
int main()
{
    float l1, l2, b;
    int r;
    cout << "enter the length of square , radius of circle and lenght and breadth of rectangle" << endl;
    cin >> l1 >> r >> l2 >> b;

    cout << "area of square is " << area(l1) << " area of circle is " << area(r) << " area of rectangle is " << area(l2, b) << endl;
    return 0;
}