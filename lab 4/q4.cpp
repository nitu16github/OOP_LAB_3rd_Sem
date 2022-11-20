// WAP to find the square and cube of a number using an inline function.

#include<iostream>

using namespace std; 
inline int square(int c){

return (c*c);
}
inline int cube(int c){

return (c*c*c);

}

int main(){
    int sqr,cu;
cout<<"enter the number for square no:";
cin>>sqr;
cout<<"enter the number for cube no:";
cin>>cu;
cout<<"the square number is:"<<square(sqr)<<endl; 

cout<<"the cube number is:"<<cube(cu)<<endl;

return 0;

}