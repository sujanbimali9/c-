#include <iostream>
using namespace std;

class Complex
{
private:
    float real, imaginary;

public:
    void read()
    {
        cout << "enter the real and imaginary number" << endl;
        cin >> real >> imaginary;
    }
    void add(Complex c1, Complex c2)
    {
        cout << c1.real + c2.real << " + " << c1.imaginary + c2.imaginary << "i" << endl;
    }
};
int main()
{
    Complex c1, c2;
    c1.read();
    c2.read();
    c1.add(c1, c2);
}