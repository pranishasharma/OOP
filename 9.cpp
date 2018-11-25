#include<conio.h>
#include<iostream>
using namespace std;
class human
{
    static int hcount;
public:
human()
{
    hcount++;
}
    static void display()
    {
        cout<<"there are "<<hcount<<" humans"<<endl;
    }
};
int human:: hcount=0;
int main()
{
    human h1;
    h1.display();
    human h2;
    h2.display();
    return 0;
}
