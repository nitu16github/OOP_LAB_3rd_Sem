//Create a class which stores time in hh:mm format. Include all the constructors. The parameterized constructor should initialize the minute value to zero, if it is not provided.

#include<iostream>
using namespace std;


class Time {
private:
    int hours;
    int minutes;
   
public:
    Time(){                        // default constructor
       hours = 0;
       minutes = 0;
       
   }
    Time(int h, int m) {       // parameterized constructor
        hours = h;
        minutes = m;
        
   }
    void display(){
        cout<<"TIME:  ";
        cout << hours << ":" << minutes <<endl;
}  
    void add(Time x, Time y) {
        int tmp=0;
       
       minutes = x.minutes + y.minutes+tmp;
       tmp=0;
       if(minutes > 59){
          minutes-=60;
          tmp++;
       }
          hours = x.hours + y.hours+tmp;
       if(hours >= 24)
          hours-=24;
       cout << hours << ":" << minutes << endl;  
    
  }    
};

int main() {
Time time1(11,35);
Time time2(15, 30);

time1.display();
time2.display();


return 0;
}