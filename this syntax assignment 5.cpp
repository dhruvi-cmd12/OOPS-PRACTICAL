#include<iostream>
using namespace std;
class student
{
    string name;
    int age;
    string course;
    int rollno;
public:
    void Data (string name, int age, string course, int rollno) 
    {
        this->name=name;
        this->age=age;
        this->course=course;
        this->rollno=rollno;
    }
    void display()
    {
    cout<<"Name:"<<name<<endl;
    cout<<"Age:"<<age<<endl;
    cout<<"Course:"<<course<<endl;
    cout<<"Roll No:"<<rollno<<endl;
    }
};
int main()
{
    student s;
    s.Data("Dhruvi Joshi", 18, "B.Tech", 14 );
    s.display();
    return 0;
}