#include <iostream>
using namespace std;

float *greaters(float &a, float &b)
{
    return a > b ? &a : &b;
}
int main()
{
    float a, b;
    cout << "enter the two number" << endl;
    cin >> a >> b;
    cout << *greaters(a, b) << endl;
    return 0;
}
