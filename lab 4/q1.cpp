 //1. WAP to find area of a circle, a rectangle and a triangle, using concept of function overloading


#include<iostream>
using namespace std;
double area(int r){
    double area;
    area=3.14*r*r; //area for circle

    return area;
}
int area(int l,int b){
int area;
area=l*b; //area for rectangle
return area;

}
double area(int b,double h){
double area;
area=1/2.0*(b*h); //area for triangle
return area;

}
int main(){
    int r,l,b,bl;
    double h;

cout<<"enter the radius for circle:";
cin>>r;
cout<<"enter the length and breadth for reactangle:";
cin>>l; cin>>b;

cout<<"enter the base and height of trangle:";
cin>>bl; cin>>h;
cout<<"area of circle is "<<area(r)<<endl;
cout<<"area of rectangle is "<<area(l,b)<<endl;
cout<<"area of triagle is "<<area(bl,h)<<endl;
return 0;

}