#include <iostream>
using namespace std;
class Convert
{
private:
    float feet;

public:
    void input()
    {
        cout << "enter in feet" << endl;
        cin >> feet;
    }
    float convert()
    {
        return feet * 3.28;
    }
};
int main()
{
    Convert c;
    c.input();
    cout << c.convert() << endl;
}
