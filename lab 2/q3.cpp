#include<iostream>
#include<string>
#include<cstdlib>
 using namespace std;
 int main(int argc,char *argv[])
 {
    int i;
    cout<<"Number of arguments: "<<argc;
    for(i=0;i<argc;i++){
        cout<<"args:" <<argv[i]<<endl;
    }
    return 1;
 }