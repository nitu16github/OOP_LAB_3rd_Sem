#include <iostream>
#include <math.h>
class distance
{
    public:
    int x;
    int y;
    int dist;
    int a;
    int b;
    int sum1;
};
int main()
{
    distance d1;
    std::cout<<"Enter the number in x axis:";
    std::cin>>d1.x;
    std::cout<<"Enter the number in y axis :";
    std::cin>>d1.y;
    d1.a=pow(d1.x,2);
    d1.b=pow(d1.y,2);
    d1.sum1=d1.a+d1.b;
    d1.dist=sqrt(d1.sum1);
    std::cout<<"\nThe distance between the the two points is:"<<d1.dist<<std::endl;
}