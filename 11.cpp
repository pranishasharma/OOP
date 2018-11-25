#include<conio.h>
#include<iostream>
using namespace std;
class a
{
    private:
    int a;
    public:
    void reada()
    {
        cout<<"Enter a: ";
        cin>>a;
    }
    void showa()
    {
        cout<<a<<endl;
    }
};
class b
{
    private:
    int b;
    public:
    void readb()
    {
        cout<<"Enter b: ";
        cin>>b;
    }
    void showb()
    {
        cout<<b<<endl;
    }
};
class c
{
    private:
    int c;
    public:
    void readc()
    {
        cout<<"Enter c: ";
        cin>>c;
    }
    void showc()
    {
        cout<<c<<endl;
    }
};
class d: public a, public b, public c
{
public:
    void read()
    {
        reada();
        readb();
        readc();
    }
     void show()
    {
        showa();
        showb();
        showc();
    }
};
int main()
{
    d s1;
    s1.read();
    s1.show();
    return 0;
}
