#include <iostream>
using namespace std;

struct Distance {
    int feet;
    float inch;
}c1 , c2, sum;

int main() {
    cout << "Enter 1st distance," << endl;
    cout << "Enter feet: ";
    cin >> c1.feet;
    cout << "Enter inch: ";
    cin >> c1.inch;

    cout << "\nEnter information for 2nd distance" << endl;
    cout << "Enter feet: ";
    cin >> c2.feet;
    cout << "Enter inch: ";
    cin >> c2.inch;

    sum.feet = c1.feet+c2.feet;
    sum.inch = c1.inch+c2.inch;

    // changing to feet if inch is greater than 12
    if(sum.inch > 12) {
        // extra feet
        int extra = sum.inch / 12;

        sum.feet += extra;
        sum.inch -= (extra * 12);
    } 

    cout << endl << "Sum of distances = " << sum.feet << " feet  " << sum.inch << " inches";
    return 0;
}