/*WAP to overload the  following operator for class Distance which store the distance in feets & inches.
	a. add two object using binary overloading operator.(+)
	b. add an int to an object.*/

#include <iostream>
using namespace std;

class Distance {
private:
    int feet, inches;

public:
    void readDistance(void)
    {
        cout<< "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    void dispDistance(void)
    {
        cout << "Feet:" << feet << "\t"
             << "Inches:" << inches << endl;
    }

    Distance operator+(Distance& dist1)
    {
        Distance tempD; 
        tempD.inches = inches + dist1.inches;
        tempD.feet = feet + dist1.feet + (tempD.inches / 12);
        tempD.inches = tempD.inches % 12;
        return tempD;
    }
};

int main()
{
    Distance d1, d2, d3;

    cout << "Enter first  distance:" << endl;
    d1.readDistance();
    cout << endl;

    cout << "Enter second distance:" << endl;
    d2.readDistance();
    cout << endl;

    // add two distances
    d3 = d1 + d2;

    cout << "Total Distance:"<<endl;
    d3.dispDistance();

    cout << endl;

    return 0;
}