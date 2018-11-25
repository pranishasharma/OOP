#include<conio.h>
#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int age;
    void set()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter age: ";
        cin>>age;
    }
};
class info : public student
{
    public:
    int id;
    void setid()
    {
        cout<<"Enter id: ";
        cin>>id;
    }
    void display()
    {
        cout<<name<<endl<<age<<endl<<id<<endl;
    }
};

int main()
{
    info a;
    a.set();
    a.setid();
    a.display();
    return 0;
}
