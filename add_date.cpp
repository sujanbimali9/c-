#include <iostream>

using namespace std;

class AddDate
{
private:
    int hour, minute, second, days, months;

public:
    void readDate()
    {
        cout << "enter the date in format day hours minute and seconds" << endl;
        cin >> days >> hour >> minute >> second;
    }

    void formatDate()
    {
        if (second >= 60)
        {
            minute++;
            second = second - 60;
        }
        if (minute >= 60)
        {
            hour++;
            minute = minute - 60;
        }
        if (hour >= 24)
        {
            days++;
            hour = hour - 24;
        }
        if (days >= 30)
        {
            months++;
            days = days - 30;
        }
        if (second >= 60 || minute >= 60 || hour >= 24 || days >= 30)
        {
            formatDate();
        }
        }
    void display()
    {
        cout << days << "days " << hour << "hours " << minute << "minute " << second << "second " << endl;
    }
    void addDate(AddDate d1, AddDate d2)
    {
        days = d1.days + d2.days;
        hour = d1.hour + d2.hour;
        minute = d1.minute + d2.minute;
        second = d1.second + d2.second;
        formatDate();
    }
};

int main()
{
    AddDate d1, d2;
    d1.readDate();
    d2.readDate();
    d1.addDate(d1, d2);
    d1.display();
}