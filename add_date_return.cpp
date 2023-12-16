#include <iostream>

using namespace std;

class AddDate
{
public:
    int hour, minute, second, day, months = 0;

    void readDate()
    {
        cout << "Enter the date in format day hours minute and seconds: ";
        cin >> day >> hour >> minute >> second;
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
            day++;
            hour = hour - 24;
        }

        if (day >= 30)
        {
            months++;
            day = day - 30;
        }

        if (second >= 60 || minute >= 60 || hour >= 24 || day >= 30)
        {
            formatDate();
        }
    }

    AddDate addDate(const AddDate &d1, const AddDate &d2)
    {
        AddDate d3;
        d3.day = d1.day + d2.day;
        d3.hour = d1.hour + d2.hour;
        d3.minute = d1.minute + d2.minute;
        d3.second = d1.second + d2.second;

        d3.formatDate();

        return d3;
    }

    void display() const
    {
        cout << months << " month " << day << " days " << hour << " hours " << minute << " minutes " << second << " seconds" << endl;
    }
};

int main()
{
    AddDate d1, d2;
    d1.readDate();
    d2.readDate();

    AddDate d = d1.addDate(d1, d2);

    d.display();

    return 0;
}
