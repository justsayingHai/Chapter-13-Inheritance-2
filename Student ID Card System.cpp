#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    int age;

public:
    void setAge(int age_value)
    {
        age = age_value;
    }

    int getAge()
    {
        return age;
    }
};

class Student : public Person
{
private:
    string name;

public:
    void setName(string name_value)
    {
        name = name_value;
    }

    void displayID()
    {
        cout << "----- Student ID Card -----" << endl
            << "Name: " << name << endl
            << "Age: " << getAge() << endl
            << "Status: Active Student" << endl;
    }
};

int main()
{
    Student student_object;

    string input_name;
    int input_age;

    cout << "Enter student name: ";
    getline(cin, input_name);
    cout << "enter age: ";
    cin >> input_age;

    cout << endl << endl;

    student_object.setName(input_name);
    student_object.setAge(input_age);
    student_object.displayID();

    return 0;
}

