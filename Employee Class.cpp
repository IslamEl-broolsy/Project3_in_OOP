#include <iostream>

using namespace std;

class clsEmployee
{

private:

    int _ID;
    string _FirstName;
    string _LastName;
    string _Email;
    string _Phone;
    string _Title;
    float _Salary;
    string _Department;

public:

    clsEmployee(int ID, string FirstName, string LastName, string Email, string Phone , string Title , float Salary , string Department)
    {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _Phone = Phone;
        _Title = Title;
        _Salary = Salary;
        _Department = Department;
    }

    int ID()
    {
        return _ID;
    }

    void SetFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }

    string FirstName()
    {
        return _FirstName;
    }

    void SetLastName(string LastName)
    {
        _LastName = LastName;
    }

    string LastName()
    {
        return _LastName;
    }

    string FullName()
    {
        return  _FirstName + " " + _LastName;;
    }

    void SetEmail(string Email)
    {
        _Email = Email;
    }

    string Email()
    {
        return _Email;
    }

    void SetPhone(string Phone)
    {
        _Phone = Phone;
    }

    string Phone()
    {
        return _Phone;
    }

    void SetTitle(string Title)
    {
        _Title = Title;
    }

    string Title()
    {
        return _Title;
    }

    void SetSalary(float Salary)
    {
        _Salary = Salary;
    }

    float Salary()
    {
        return _Salary;
    }

    void SetDepartment(string Department)
    {
        _Department = Department;
    }

    string Department()
    {
        return _Department;
    }

    void SendEmail(string Subject, string Body)
    {
        cout << "\nThe following message sent successfully to email: " << _Email;
        cout << "\nSubject: " << Subject;
        cout << "\nBody: " << Body;
    }

    void SendSMS(string TextMessage)
    {
        cout << "\n\nThe following message sent successfully to Phone: " << _Phone << endl;
        cout << TextMessage << endl;
    }

    void Print()
    {
        cout << "\nInfo:\n";
        cout << "\n---------------------------";
        cout << "\nID        : " << _ID;
        cout << "\nFirstName : " << _FirstName;
        cout << "\nLastName  : " << _LastName;
        cout << "\nFull Name : " << FullName();
        cout << "\nTitle     : " << _Title;
        cout << "\nEmail     : " << _Email;
        cout << "\nPhone     : " << _Phone;
        cout << "\nSalary    : " << _Salary;
        cout << "\nDepartment: " << _Department << endl;
        cout << "\n---------------------------\n";
    }

};

int main()
{

    clsEmployee Employee1(10, "Islam", "Ahmed", "My@gmail.com", "01092058985" , "CEO" , 8000 , "Information System");
    Employee1.Print();

    Employee1.SendEmail("Hi", "How are you?");
    Employee1.SendSMS("How are you?");

    system("pause > 0");
    return 0;
}
