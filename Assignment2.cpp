#include <iostream>
using namespace std;

class Student {
    // Data members (attributes)
    string name;
    string rollNumber;
    string course;
    int age;

public:
    // Function to take student details from the staff
    void recordDetails() {
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> rollNumber;

        cout << "Enter course: ";
        cin >> course;

        cout << "Enter age: ";
        cin >> age;
    }

    // Function to display student details
    void displayDetails() {
        cout << "\n----- Student Details -----" << endl;
        cout << "Name        : " << name << endl;
        cout << "Roll Number : " << rollNumber << endl;
        cout << "Course      : " << course << endl;
        cout << "Age         : " << age << endl;
        cout << "----------------------------" << endl;
    }
};

int main() {
    Student s1;   // creating an object of class Student

    cout << "Enter details of the student:" << endl;
    s1.recordDetails();

    cout << "\nDisplaying student information:" << endl;
    s1.displayDetails();

    return 0;
}
