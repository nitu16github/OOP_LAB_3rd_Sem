//2. WAP to find volume of a sphere, a cylinder and a cuboid, using function overloading

#include<iostream>
using namespace std;
double volume(int r){
    double volume;
    volume=4/3.0*3.14*(r*r*r); //volume of sphere
    return volume;
}

double volume(int r,int h){
double volume;
volume=3.14*r*r*h; //volume for cylinder
return volume;

}



int volume(int l,int b,int h){
 int volume;
volume=l*b*h; //volume for cuboid
return volume;

}

int main(){
    int r,l,b,h;

cout<<"enter the radius for sphere :";
cin>>r;
cout<<"enter the length:";
cin>>l; 
cout<<"enter the breadth:";
cin>>b;
cout<<"enter the height:";
cin>>h;


cout<<"volume of sphere is "<<volume(r)<<endl;
cout<<"voume of cylinder  is"<<volume(r,h)<<endl;
cout<<"voume of cudoid"<<volume(l,b,h)<<endl;
return 0;

}