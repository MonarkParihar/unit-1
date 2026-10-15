#include<iostream>
#include<string>
using namespace std;

class Employee
{
private:
    int employeeID;
    string name;
    float basicSalary;
    float bonus;
    float totalSalary;

public:
    Employee()
    {
        employeeID = 0;
        name = "";
        basicSalary = 0;
        bonus = 0;
        totalSalary = 0;

        cout << "DEFAULT CONSTRUCTOR IS CALLED" << endl;
    }

    Employee(int id, string n, float salary, float b)
    {
        employeeID = id;
        name = n;
        basicSalary = salary;
        bonus = b;
        totalSalary = 0;

        cout << "PARAMETERIZED CONSTRUCTOR IS CALLED" << endl;
    }

    float calculateTotalSalary()
    {
        totalSalary = basicSalary + bonus;
        return totalSalary;
    }

    float display()
    {
        cout << "EMPLOYEE ID IS: " << employeeID << endl;
        cout << "EMPLOYEE NAME IS: " << name << endl;
        cout << "BASIC SALARY IS: " << basicSalary << endl;
        cout << "BONUS IS: " << bonus << endl;
        cout << "TOTAL SALARY IS: " << calculateTotalSalary() << endl;

        return totalSalary;
    }
};

int main()
{
    Employee e1(101, "Bruce Wayne", 100000, 25000);

    e1.display();

    return 0;
}
