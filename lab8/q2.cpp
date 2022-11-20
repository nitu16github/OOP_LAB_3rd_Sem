/*create a class which is a complex number.Add two object and display the resultant object,overload the ++,post and pre increment operator for the class*/
#include <iostream>
using namespace std;

class complex
{
    int real, img;

public:
    complex()
    {
        real = 0;
        img = 0;
    }
    complex(int r, int i)
    {
        real = r;
        img = i;
    }
    void set();
    void get();
    void display();
    friend complex add(complex, complex);

    complex operator++()
    {
        complex temp;
        temp.real = ++real;
        temp.img = ++img;
        return temp;
    }

};

void complex::set()
{
    cout << "Enter Real part: ";
    cin >> real;
    cout << "Enter Imaginary Part: ";
    cin >> img;
}

void complex::get()
{
    cout << "The complex number is: " << real << "+" << img << "i" << endl;
}

void complex::display()
{
    if (img < 0)
        if (img == -1)
            cout << "The complex number is: " << real << "-i" << endl;
        else
            cout << "The complex number is: " << real << img << "i" << endl;
    else if (img == 1)
        cout << "The complex number is: " << real << " + i" << endl;
    else
        cout << "The complex number is: " << real << " + " << img << "i" << endl;
}

complex add(complex c1, complex c2)
{
    complex res;
    res.real = c1.real + c2.real;
    res.img = c1.img + c2.img;
    return res;
}

int main()
{
    complex n1(4, 2), n2(5, -3);
    complex result;
    result = add(n1, n2);
    result.display();
    ++n1;
    n1.display();

    return 0;
}