#include <iostream>
#include <string>

using namespace std;

class Visitor
{
private:
    int id;
    string city;

public:
    void setID(int id_value)
    {
        id = id_value;
    }

    int getID()
    {
        return id;
    }

    void setCity(string city_value)
    {
        city = city_value;
    }

    string getCity()
    {
        return city;
    }
};

class PremiumVisitor : public Visitor
{
private:
    string visitor_name, pass_type, locker_required;
    int rides_selected, guests_count, total_spending;

public:
    void set_premium_details(string name, string pass, string locker, int rides, int guests, int total)
    {
        visitor_name = name;
        pass_type = pass;
        locker_required = locker;
        rides_selected = rides;
        guests_count = guests;
        total_spending = total;
    }

    string LoungeAccess()
    {
        if (guests_count > 3)
        {
            return "Yes";
        }
        else
        {
            return "No";
        }
    }

    string Coupon()
    {
        if (total_spending >= 3000)
        {
            return "Eligible";
        }
        else
        {
            return "Not Eligible";
        }
    }

    string Category()
    {
        if (pass_type == "Gold" || pass_type == "Platinum")
        {
            return "Premium Fast Track";
        }
        else
        {
            return "Standard Premium";
        }
    }

    void display()
    {
        cout << "****************************************" << endl
            << "         ADVENTURE PARK PREMIUM PASS" << endl
            << "****************************************" << endl
            << "Visitor Name: " << visitor_name << endl
            << "ID: " << getID() << endl
            << "City: " << getCity() << endl
            << "Pass Type: " << pass_type << endl
            << "Rides Selected: " << rides_selected << endl
            << "Guests count: " << guests_count << endl
            << "Total Spending: " << total_spending << endl
            << "Locker required: " << locker_required << endl
            << "Lounge Access: " << LoungeAccess() << endl
            << "Food Coupon: " << Coupon() << endl
            << "Visitor Category: " << Category() << endl
            << "Reminder: Please arrive 30 minutes early!" << endl
            << "****************************************" << endl;
    }

};

int main()
{
    PremiumVisitor visitor;

    string name, city, pass_level, get_locker;
    int id, rides, guests, total;

    cout << "Enter visitor name: ";
    getline(cin, name);

    cout << "Enter visitor ID: ";
    cin >> id;

    cin.ignore();

    cout << "Enter city: ";
    getline(cin, city);

    cout << "Enter pass type: ";
    getline(cin, pass_level);

    cout << "Enter number of rides selected: ";
    cin >> rides;

    cout << "Enter number of guest: ";
    cin >> guests;

    cout << "Enter total spending: ";
    cin >> total;

    cin.ignore();

    cout << "Enter locker required (Yes/No): ";
    getline(cin, get_locker);

    cout << endl << endl;

    visitor.setID(id);
    visitor.setCity(city);
    visitor.set_premium_details(name, pass_level, get_locker, rides, guests, total);
    visitor.display();
    
    return 0;
}

