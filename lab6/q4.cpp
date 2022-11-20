//WAP to demonstrate the order of call of constructors and destructors for a class

#include<iostream>
using namespace std;
 class  base{
    public:
    base()
{
    cout<<"The base class destructor called first"<<endl;

} ~base()
{
    cout<<"The base class  destructor called second"<<endl;
}
 };
 class derived:public base
 {
public:
derived()
{
    cout<<"The derived class constructor called second"<<endl;

} ~derived()
{
    cout<<"The derived class destructor called first"<<endl;
}
 };
int main()
{
    derived d;
    return 0;
}