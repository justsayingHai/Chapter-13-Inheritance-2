#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    int age;
    string gender;

public:
    void setAge(int age_value)
    {
        age = age_value;
    }

    int getAge()
    {
        return age;
    }

    void setGender(string gender_value)
    {
        gender = gender_value;
    }

    string getGender()
    {
        return gender;
    }
};

class Patient : public Person
{
private:
    string patient_name, disease_name, doctor_name;
    int room_number, days_amitted;
    float bill_amt;

public:
    void set_patient_details(string name_value, string disease_value, string doctor_value, int room_value, int days_value, float bill_value)
    {
        patient_name = name_value;
        disease_name = disease_value;
        doctor_name = doctor_value;
        room_number = room_value;
        days_amitted = days_value;
        bill_amt = bill_value;
    }

    string AdmissionType()
    {
        if (days_amitted > 7)
        {
            return "Long Stay\n";
        }
        else
        {
            return "Short Stay\n";
        }
    }

    string BillStatus()
    {
        if (bill_amt > 5000)
        {
            return "High Bill Case\n";
        }
        else
        {
            return "Regular Bill Case\n";
        }
    }

    void display()
    {
        cout << "========================================" << endl
            << "       SMART HOSPITAL RECORD" << endl
            << "========================================" << endl
            << "Patient Name: " << patient_name << endl
            << "Age: " << getAge() << endl
            << "Gender: " << getGender() << endl
            << "Disease: " << disease_name << endl
            << "Doctor Assigned: " << doctor_name << endl
            << "Room number: " << room_number << endl
            << "Days Admitted: " << days_amitted << endl
            << "Bill Amount: " << bill_amt << endl
            << "Admission Type: " << AdmissionType() << endl
            << "Bill Status: " << BillStatus() << endl
            << "Advice: Patient needs continuous monitoring" << endl
            << "========================================" << endl;
    }

};

int main()
{
    Patient patient;

    string p_name, gender, disease, d_name;
    int age, room, days_in_hospital;
    float bill_num;

    cout << "Enter patient name: ";
    getline(cin, p_name);

    cout << "Enter age: ";
    cin >> age;
    cin.ignore();

    cout << "Enter gender: ";
    getline(cin, gender);

    cout << "Enter disease: ";
    getline(cin, disease);

    cout << "Enter doctor name: ";
    getline(cin, d_name);

    cout << "Enter room: ";
    cin >> room;

    cout << "Enter days admitted: ";
    cin >> days_in_hospital;

    cout << "Enter bill amount: ";
    cin >> bill_num;

    cout << endl << endl << endl << endl;

    patient.setAge(age);
    patient.setGender(gender);
    patient.set_patient_details(p_name, disease, d_name, room, days_in_hospital, bill_num);
    patient.display();

    return 0;
}
