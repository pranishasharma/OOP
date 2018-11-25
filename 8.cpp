#include<conio.h>
#include<iostream>
using namespace std;
class girl;
class boy
{
int income1, income2;
public:
    void setdata(int in1, int in2)
    {
        income1=in1;
        income2=in2;
    }
friend class girl;
};
class girl
{
    int income;
public:
    int girlfun(boy b1)
    {
        return b1.income1 + b1.income2;
    }
    void setdata(int in)
    {
        income=in;
    }
    void show()
    {
        boy b1;
        b1.setdata(100,200);
        cout<<"Boys income "<<b1.income1<<endl;
        cout<<"Girls income "<<income<<endl;
    }
};
int main()
{
    boy b1;
    girl g1;
    b1.setdata(500,1000);
    g1.setdata(300);
    cout<<"boy 1 total income:\n"<<g1.girlfun(b1)<<endl;
    g1.show();
    return 0;
}
