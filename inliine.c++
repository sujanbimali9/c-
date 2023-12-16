#include <iostream>
using namespace std;

inline int interest(float p, float t, float r = 15)
{
    return p * t * r / 100;
}
int main()
{
    float p, t;
    cout << "enter the principal and time " << endl;
    cin >> p >> t;
    cout << interest(p, t) << endl;
    return 0;
}