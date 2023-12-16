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
    string add(Complex c1, Complex c2)
    {
        return to_string(c1.real + c2.real) + " + " + to_string(c1.imaginary + c2.imaginary) + "i";
    }
};

int main()
{
    Complex c1, c2;
    c1.read();
    c2.read();
    cout << c1.add(c1, c2) << endl;
}
