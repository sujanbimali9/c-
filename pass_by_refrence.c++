#include <iostream>
using namespace std;

void tsa(float &r, float &h, float &result)
{
    result = 2 * 3.14 * r * (r + h);
}

void csa(float &r, float &h, float &result)
{
    result = 2 * 3.14 * r * h;
}
void volume(float &r, float &h, float &result)
{
    result = result = 3.14 * r * r * h;
}
int main()
{
    float r, h, result;
    cout << "enter the radius and height" << endl;
    cin >> r >> h;
    tsa(r, h, result);
    cout << result << endl;
    csa(r, h, result);
    cout << result << endl;
    volume(r, h, result);
    cout << result << endl;
}